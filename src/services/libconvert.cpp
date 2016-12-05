/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   libconvert.cpp
 * Author: kot
 *
 * Created on 5 грудня 2016, 4:15
 */

#include <cstdlib>

#include "ConverterServiceImpl.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    const int SERVICE_PORT = 9999;

	std::auto_ptr<ConverterServiceImpl> srv (new ConverterServiceImpl());
	if (!srv->run(SERVICE_PORT))
	{ 
		srv->soap_stream_fault(std::cerr);
		exit(-1);
	} 

	
    return 0;
}

