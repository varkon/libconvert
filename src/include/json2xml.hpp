/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   json2xml.hpp
 * Author: kot
 *
 * Created on 5 грудня 2016, 3:32
 */

#ifndef JSON2XML_HPP
#define JSON2XML_HPP
#include <iostream>
#include <map>
#include <string>
#include <cctype>
#include "rapidxml/rapidxml.hpp"
#include "rapidxml/rapidxml_utils.hpp"
#include "rapidxml/rapidxml_print.hpp"
#include "rapidjson/document.h"
#include "rapidjson/prettywriter.h"
#include "rapidjson/encodedstream.h"
#include "rapidjson/stringbuffer.h"
#include "rapidjson/reader.h"
#include "rapidjson/writer.h"
#include "rapidjson/filereadstream.h"
#include "rapidjson/filewritestream.h"
#include "rapidjson/error/en.h"


using namespace std;
using namespace rapidjson;

string toXml(rapidjson::Document value, string name, string ind)
{
    string xml = "";
    if (value.IsArray())
    {
        for (SizeType i = 0; i < value.Size(); ++i)
        {
            xml += ind + toXml(value[i], name,ind+"\t" )+"\n";
        }
    }
    else if (value.IsObject())
    {
        bool hasChild = false;
        xml += ind + "<" + name;
        for (auto& m : value.GetObject())
        {
            if (m.name[0] == "@")
               xml += " " + m.name.GetString().substr(1) + "=\"" + value[m].GetString() + "\"";
            else
               hasChild = true;
         }
         xml += hasChild ? ">" : "/>";
         if (hasChild) {
            for (auto& m : value.GetObject()) {
               if (m == "#text")
                  xml += value[m];
               else if (m == "#cdata")
                  xml += "<![CDATA[" + value[m] + "]]>";
               else if (m.name[0] != "@")
                  xml += toXml(value[m], m, ind+"\t");
            }
            xml += (xml[xml.length-1]=="\n"?ind:"") + "</" + name + ">";
         }
      }
      else {
         xml += ind + "<" + name + ">" + value.GetString() +  "</" + name + ">";
      }
      return xml;
        
    
    
}
string json2xml(const char *json_str)
{
    rapidjson::Document js_doc;
    js_doc.Parse(json_str);
    
     string xml = "";
     for (auto& m : js_doc.GetObject())
            xml += toXml(js_doc[m],m,"");
    return xml;
}
#endif /* JSON2XML_HPP */

