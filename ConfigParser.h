/*
 * ConfigParser.h
 *
 *  Created on: Aug 28, 2016
 *      Author: gpollep
 */

#ifndef CONFIGPARSER_H_
#define CONFIGPARSER_H_

#include "SbDefines.h"

ConfigStruct* GenerateConfigStructs(const char* configFile, int* count);
int Tokenize(char* str, char* pattr, int* permission);

#endif /* CONFIGPARSER_H_ */
