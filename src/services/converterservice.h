/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   converterservice.h
 * Author: kot
 *
 * Created on 5 грудня 2016, 0:02
 */

#ifndef CONVERTERSERVICE_H
#define CONVERTERSERVICE_H
//gsoap ns service name:	converterservice
//gsoap ns service style:	rpc
//gsoap ns service encoding:	encoded
//gsoap ns service namespace:	urn:converterservice
//gsoap ns service location:	http://localhost:8080
//gsoap ns service method-action: MakeConvert urn:MakeConvert
typedef int xsd__int;
typedef char* xsd__string;

enum t__status				// remote status:
{ 
  STATE_OK,					// ok
  STATE_FAIL				// fail to process
};
enum t__type				// type request:
{ 
  XML_TYPE,					// xml
  JSON_TYPE				// json
};

class t__result
{
public:
	enum t__status errCode;
	xsd__string message;
};
class t__input
{
public:
    enum t__type inputType, outputType;
    xsd__string request;
    
};
int ns__MakeConvert(t__input* request,  t__result* result);


#endif /* CONVERTERSERVICE_H */

