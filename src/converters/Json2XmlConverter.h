/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Json2XmlConverter.h
 * Author: kot
 *
 * Created on 5 грудня 2016, 3:23
 */

#ifndef JSON2XMLCONVERTER_H
#define JSON2XMLCONVERTER_H
#include "BuilderConverter.h"

class Json2XmlConverter : public BuilderConverter {
  
    std::string __json_str;
    Json2XmlConverter(const Json2XmlConverter& orig);
    Json2XmlConverter& operator=(const Json2XmlConverter&){return this;}
  public:
    Json2XmlConverter(const char* str);
    virtual const std::string& getConvertString();
    virtual ~Json2XmlConverter();
private:

};

#endif /* JSON2XMLCONVERTER_H */

