/* soapconverterserviceProxy.cpp
   Generated by gSOAP 2.8.39 for converterservice.h

gSOAP XML Web services tools
Copyright (C) 2000-2016, Robert van Engelen, Genivia Inc. All Rights Reserved.
The soapcpp2 tool and its generated software are released under the GPL.
This program is released under the GPL with the additional exemption that
compiling, linking, and/or using OpenSSL is allowed.
--------------------------------------------------------------------------------
A commercial use license is available from Genivia Inc., contact@genivia.com
--------------------------------------------------------------------------------
*/

#include "soapconverterserviceProxy.h"

converterserviceProxy::converterserviceProxy() : soap(SOAP_IO_DEFAULT)
{	converterserviceProxy_init(SOAP_IO_DEFAULT, SOAP_IO_DEFAULT);
}

converterserviceProxy::converterserviceProxy(const converterserviceProxy& rhs)
{	soap_copy_context(this, &rhs);
	this->soap_endpoint = rhs.soap_endpoint;
}

converterserviceProxy::converterserviceProxy(const struct soap &_soap) : soap(_soap)
{ }

converterserviceProxy::converterserviceProxy(const char *endpoint) : soap(SOAP_IO_DEFAULT)
{	converterserviceProxy_init(SOAP_IO_DEFAULT, SOAP_IO_DEFAULT);
	soap_endpoint = endpoint;
}

converterserviceProxy::converterserviceProxy(soap_mode iomode) : soap(iomode)
{	converterserviceProxy_init(iomode, iomode);
}

converterserviceProxy::converterserviceProxy(const char *endpoint, soap_mode iomode) : soap(iomode)
{	converterserviceProxy_init(iomode, iomode);
	soap_endpoint = endpoint;
}

converterserviceProxy::converterserviceProxy(soap_mode imode, soap_mode omode) : soap(imode, omode)
{	converterserviceProxy_init(imode, omode);
}

converterserviceProxy::~converterserviceProxy()
{
	this->destroy();
	}

void converterserviceProxy::converterserviceProxy_init(soap_mode imode, soap_mode omode)
{	soap_imode(this, imode);
	soap_omode(this, omode);
	soap_endpoint = NULL;
	static const struct Namespace namespaces[] = {
        {"SOAP-ENV", "http://www.w3.org/2003/05/soap-envelope", "http://schemas.xmlsoap.org/soap/envelope/", NULL},
        {"SOAP-ENC", "http://www.w3.org/2003/05/soap-encoding", "http://schemas.xmlsoap.org/soap/encoding/", NULL},
        {"xsi", "http://www.w3.org/2001/XMLSchema-instance", "http://www.w3.org/*/XMLSchema-instance", NULL},
        {"xsd", "http://www.w3.org/2001/XMLSchema", "http://www.w3.org/*/XMLSchema", NULL},
        {"t", "http://tempuri.org/t.xsd", NULL, NULL},
        {"ns", "urn:converterservice", NULL, NULL},
        {NULL, NULL, NULL, NULL}
    };
	soap_set_namespaces(this, namespaces);
}

#ifndef WITH_PURE_VIRTUAL
converterserviceProxy *converterserviceProxy::copy()
{	converterserviceProxy *dup = SOAP_NEW_COPY(converterserviceProxy(*(struct soap*)this));
	return dup;
}
#endif

converterserviceProxy& converterserviceProxy::operator=(const converterserviceProxy& rhs)
{	soap_copy_context(this, &rhs);
	this->soap_endpoint = rhs.soap_endpoint;
	return *this;
}

void converterserviceProxy::destroy()
{	soap_destroy(this);
	soap_end(this);
}

void converterserviceProxy::reset()
{	this->destroy();
	soap_done(this);
	soap_initialize(this);
	converterserviceProxy_init(SOAP_IO_DEFAULT, SOAP_IO_DEFAULT);
}

void converterserviceProxy::soap_noheader()
{	this->header = NULL;
}

::SOAP_ENV__Header *converterserviceProxy::soap_header()
{	return this->header;
}

::SOAP_ENV__Fault *converterserviceProxy::soap_fault()
{	return this->fault;
}

const char *converterserviceProxy::soap_fault_string()
{	return *soap_faultstring(this);
}

const char *converterserviceProxy::soap_fault_detail()
{	return *soap_faultdetail(this);
}

int converterserviceProxy::soap_close_socket()
{	return soap_closesock(this);
}

int converterserviceProxy::soap_force_close_socket()
{	return soap_force_closesock(this);
}

void converterserviceProxy::soap_print_fault(FILE *fd)
{	::soap_print_fault(this, fd);
}

#ifndef WITH_LEAN
#ifndef WITH_COMPAT
void converterserviceProxy::soap_stream_fault(std::ostream& os)
{	::soap_stream_fault(this, os);
}
#endif

char *converterserviceProxy::soap_sprint_fault(char *buf, size_t len)
{	return ::soap_sprint_fault(this, buf, len);
}
#endif

int converterserviceProxy::MakeConvert(const char *endpoint, const char *soap_action, t__input *request, t__result *result)
{	struct soap *soap = this;
	struct ns__MakeConvert soap_tmp_ns__MakeConvert;
	if (endpoint)
		soap_endpoint = endpoint;
	if (soap_endpoint == NULL)
		soap_endpoint = "http://localhost:8080";
	if (soap_action == NULL)
		soap_action = "urn:MakeConvert";
	soap_tmp_ns__MakeConvert.request = request;
	soap_begin(soap);
	soap_set_version(soap, 2); /* SOAP1.2 */
	soap->encodingStyle = "";
	soap_serializeheader(soap);
	soap_serialize_ns__MakeConvert(soap, &soap_tmp_ns__MakeConvert);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put_ns__MakeConvert(soap, &soap_tmp_ns__MakeConvert, "ns:MakeConvert", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_endpoint, soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put_ns__MakeConvert(soap, &soap_tmp_ns__MakeConvert, "ns:MakeConvert", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!result)
		return soap_closesock(soap);
	result->soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	if (soap_recv_fault(soap, 1))
		return soap->error;
	result->soap_get(soap, "", NULL);
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

/* End of client proxy code */
