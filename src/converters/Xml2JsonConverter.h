/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   XmlConverter.h
 * Author: kot
 *
 * Created on 5 грудня 2016, 2:54
 */

#ifndef XMLCONVERTER_H
#define XMLCONVERTER_H
#include "BuilderConverter.h"

class Xml2JsonConverter : public BuilderConverter{
    std::string __xml_str;
     Xml2JsonConverter(const Xml2JsonConverter& orig);
     Xml2JsonConverter& operator=(const Xml2JsonConverter&){return this;}
public:
    Xml2JsonConverter(const char* str);
   
    virtual ~Xml2JsonConverter();
    virtual const std::string& getConvertString();

private:

};

#endif /* XMLCONVERTER_H */

