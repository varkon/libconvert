/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   BuilderConverter.h
 * Author: kot
 *
 * Created on 5 грудня 2016, 2:06
 */

#ifndef BUILDERCONVERTER_H
#define BUILDERCONVERTER_H

#include <string>


class BuilderConverter {
public:
    BuilderConverter();
    BuilderConverter(const BuilderConverter& orig);
    virtual ~BuilderConverter();
    virtual const std::string& getConvertString() = 0;
private:

};

#endif /* BUILDERCONVERTER_H */

