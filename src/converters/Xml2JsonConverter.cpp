/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   XmlConverter.cpp
 * Author: kot
 * 
 * Created on 5 грудня 2016, 2:54
 */

#include "Xml2JsonConverter.h"
#include "xml2json.hpp"

Xml2JsonConverter::Xml2JsonConverter(const char* str)
:__xml_str(str)
{
}

Xml2JsonConverter::Xml2JsonConverter(const Xml2JsonConverter& orig) {
}

Xml2JsonConverter::~Xml2JsonConverter() {
}
const std::string& Xml2JsonConverter::getConvertString()
{
    return xml2json(__xml_str.c_str());
}

