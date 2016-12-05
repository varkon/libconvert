/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   converterclient.cpp
 * Author: kot
 *
 * Created on 5 грудня 2016, 4:26
 */

#include <cstdlib>
#include "soapconverterserviceProxy.h"
#include "converterservice.nsmap"
#include "converterservice.h"
#include <iostream>
#include <fstream>
using namespace std;
const char server[] = "http://localhost:9999";
/*
 * 
 */
int main(int argc, char** argv) {

    if (argc < 3)
    {
        cout << "Usage: [xml | json] file_name";
        return 0;
    }
    converterserviceProxy client;
    client.soap_endpoint = server;
    t__type TypeRequest;
    switch (*argv[1])
    {
            case 'x':
                TypeRequest = XML_TYPE;
                break;
            case 'j' :
                TypeRequest = JSON_TYPE;
                break;
    }
    ifstream in(argv[2]);
    std::ostringstream buf;
    buf << in.rdbuf();
    std::string str(buf.str());
    t__input request;
    request.inputType = TypeRequest;
    const char message[] = str.c_str();
    int len = strlen(message);
    request.request = reinterpret_cast<char*>(soap_malloc(this,len+1));
    strncpy(request.request,len,message);
    request.request[len] = '\0';
    t__result result;
    client.MakeConvert(&request,&result);
    if (result.errCode != STATE_FAIL)
        cout << result.message << endl;
    else 
        cout << "We have error \t"<<result.message<< endl;
    return 0;
}

