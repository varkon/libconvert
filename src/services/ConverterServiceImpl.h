/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   soapConverterService.h
 * Author: kot
 *
 * Created on 4 грудня 2016, 22:10
 */

#ifndef SOAPCONVERTERSERVICE_H
#define SOAPCONVERTERSERVICE_H

#include "soapconverterserviceService.h"

class  ConverterServiceImpl : public converterserviceService{
public:
    
    virtual int int MakeConvert(t__input* request, t__result* result);

    virtual ~ConverterServiceImpl();
private:

};

#endif /* SOAPCONVERTERSERVICE_H */

