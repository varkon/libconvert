#
# Generated Makefile - do not edit!
#
# Edit the Makefile in the project folder instead (../Makefile). Each target
# has a -pre and a -post target defined where you can add customized code.
#
# This makefile implements configuration specific macros and targets.


# Environment
MKDIR=mkdir
CP=cp
GREP=grep
NM=nm
CCADMIN=CCadmin
RANLIB=ranlib
CC=gcc
CCC=g++
CXX=g++
FC=gfortran
AS=as

# Macros
CND_PLATFORM=GNU-Linux
CND_DLIB_EXT=so
CND_CONF=Debug
CND_DISTDIR=dist
CND_BUILDDIR=build

# Include project Makefile
include Makefile

# Object Directory
OBJECTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}

# Object Files
OBJECTFILES= \
	${OBJECTDIR}/src/clients/converterclient.o \
	${OBJECTDIR}/src/converters/Json2XmlConverter.o \
	${OBJECTDIR}/src/converters/Xml2JsonConverter.o \
	${OBJECTDIR}/src/interfaces/BuilderConverter.o \
	${OBJECTDIR}/src/services/ConverterServiceImpl.o \
	${OBJECTDIR}/src/services/libconvert.o \
	${OBJECTDIR}/src/services/soapC.o \
	${OBJECTDIR}/src/services/soapconverterserviceProxy.o \
	${OBJECTDIR}/src/services/soapconverterserviceService.o


# C Compiler Flags
CFLAGS=

# CC Compiler Flags
CCFLAGS=
CXXFLAGS=

# Fortran Compiler Flags
FFLAGS=

# Assembler Flags
ASFLAGS=

# Link Libraries and Options
LDLIBSOPTIONS=

# Build Targets
.build-conf: ${BUILD_SUBPROJECTS}
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/liblibconvert.${CND_DLIB_EXT}

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/liblibconvert.${CND_DLIB_EXT}: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${LINK.cc} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/liblibconvert.${CND_DLIB_EXT} ${OBJECTFILES} ${LDLIBSOPTIONS} -shared -fPIC

${OBJECTDIR}/src/clients/converterclient.o: src/clients/converterclient.cpp
	${MKDIR} -p ${OBJECTDIR}/src/clients
	${RM} "$@.d"
	$(COMPILE.cc) -g -Isrc/include -Isrc/interfaces -Isrc/readers -Isrc/services -Isrc/writers -Isrc/include/soap -std=c++11 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/clients/converterclient.o src/clients/converterclient.cpp

${OBJECTDIR}/src/converters/Json2XmlConverter.o: src/converters/Json2XmlConverter.cpp
	${MKDIR} -p ${OBJECTDIR}/src/converters
	${RM} "$@.d"
	$(COMPILE.cc) -g -Isrc/include -Isrc/interfaces -Isrc/readers -Isrc/services -Isrc/writers -Isrc/include/soap -std=c++11 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/converters/Json2XmlConverter.o src/converters/Json2XmlConverter.cpp

${OBJECTDIR}/src/converters/Xml2JsonConverter.o: src/converters/Xml2JsonConverter.cpp
	${MKDIR} -p ${OBJECTDIR}/src/converters
	${RM} "$@.d"
	$(COMPILE.cc) -g -Isrc/include -Isrc/interfaces -Isrc/readers -Isrc/services -Isrc/writers -Isrc/include/soap -std=c++11 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/converters/Xml2JsonConverter.o src/converters/Xml2JsonConverter.cpp

${OBJECTDIR}/src/interfaces/BuilderConverter.o: src/interfaces/BuilderConverter.cpp
	${MKDIR} -p ${OBJECTDIR}/src/interfaces
	${RM} "$@.d"
	$(COMPILE.cc) -g -Isrc/include -Isrc/interfaces -Isrc/readers -Isrc/services -Isrc/writers -Isrc/include/soap -std=c++11 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/interfaces/BuilderConverter.o src/interfaces/BuilderConverter.cpp

${OBJECTDIR}/src/services/ConverterServiceImpl.o: src/services/ConverterServiceImpl.cpp
	${MKDIR} -p ${OBJECTDIR}/src/services
	${RM} "$@.d"
	$(COMPILE.cc) -g -Isrc/include -Isrc/interfaces -Isrc/readers -Isrc/services -Isrc/writers -Isrc/include/soap -std=c++11 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/services/ConverterServiceImpl.o src/services/ConverterServiceImpl.cpp

${OBJECTDIR}/src/services/libconvert.o: src/services/libconvert.cpp
	${MKDIR} -p ${OBJECTDIR}/src/services
	${RM} "$@.d"
	$(COMPILE.cc) -g -Isrc/include -Isrc/interfaces -Isrc/readers -Isrc/services -Isrc/writers -Isrc/include/soap -std=c++11 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/services/libconvert.o src/services/libconvert.cpp

${OBJECTDIR}/src/services/soapC.o: src/services/soapC.cpp
	${MKDIR} -p ${OBJECTDIR}/src/services
	${RM} "$@.d"
	$(COMPILE.cc) -g -Isrc/include -Isrc/interfaces -Isrc/readers -Isrc/services -Isrc/writers -Isrc/include/soap -std=c++11 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/services/soapC.o src/services/soapC.cpp

${OBJECTDIR}/src/services/soapconverterserviceProxy.o: src/services/soapconverterserviceProxy.cpp
	${MKDIR} -p ${OBJECTDIR}/src/services
	${RM} "$@.d"
	$(COMPILE.cc) -g -Isrc/include -Isrc/interfaces -Isrc/readers -Isrc/services -Isrc/writers -Isrc/include/soap -std=c++11 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/services/soapconverterserviceProxy.o src/services/soapconverterserviceProxy.cpp

${OBJECTDIR}/src/services/soapconverterserviceService.o: src/services/soapconverterserviceService.cpp
	${MKDIR} -p ${OBJECTDIR}/src/services
	${RM} "$@.d"
	$(COMPILE.cc) -g -Isrc/include -Isrc/interfaces -Isrc/readers -Isrc/services -Isrc/writers -Isrc/include/soap -std=c++11 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/services/soapconverterserviceService.o src/services/soapconverterserviceService.cpp

# Subprojects
.build-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
