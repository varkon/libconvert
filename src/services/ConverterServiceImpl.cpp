/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   soapConverterService.cpp
 * Author: kot
 * 
 * Created on 4 грудня 2016, 22:10
 */

#include "ConverterServiceImpl.h"
#include "BuilderConverter.h"

int ConverterServiceImpl::MakeConvert(t__input* request, t__result* result)
{
    this->mode = this->mode | SOAP_C_UTFSTRING;
    
    BuilderConverter *parcer = NULL;
    switch (request->inputType)
    {
        case XML_TYPE :
            parcer = new Xml2JsonConverter(request->request);
            break;
        case JSON_TYPE :
            parcer = new Json2XmlConverter(request->request);
            break;
    }
    if ( !parcer )
    {
        this->soap_senderfault("error!", "<error xmlns=\"http://tempuri.org/\">The parser don't exists</error>");
	return SOAP_CLI_FAULT;
    }
    char res[] = parcer->getConvertString().c_str();
    int len = strlen(res);
    if (!len )
    {
        result->errCode = STATE_FAIL;
        char err[] = "error (2)!";
	int lenerr=strlen(err);
	result->message = reinterpret_cast<char*>(soap_malloc(this, lenerr+1));
	strncpy(result->message, lenerr+1, err);
	result->message[lenerr] = '\0';
    }
    else{
        result->errCode = STATE_OK;
        result->message = reinterpret_cast<char*>(soap_malloc(this,len+1));
        strncpy(result->message,len+1,res);
        result->message[len] = '\0';
    }
    return SOAP_OK;
    
}

ConverterServiceImpl::~ConverterServiceImpl() {
}

