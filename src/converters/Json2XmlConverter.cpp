/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Json2XmlConverter.cpp
 * Author: kot
 * 
 * Created on 5 грудня 2016, 3:23
 */

#include "Json2XmlConverter.h"
#include "json2xml.hpp"

Json2XmlConverter::Json2XmlConverter(const char* str)
:__json_str(str)
{
}

Json2XmlConverter::Json2XmlConverter(const Json2XmlConverter& orig) {
}

Json2XmlConverter::~Json2XmlConverter() {
}
const std::string& Json2XmlConverter::getConvertString()
{
    return json2xml(__json_str.c_str());
}
