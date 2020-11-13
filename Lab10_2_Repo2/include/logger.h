/*
@file logger.h
@brief header file for the logging functions
@author matthew.esslie
@credit bilbo bagginss
@assignment Lab10.2
@date 11/12/20
*/

#ifndef LOGGER_H
#define LOGGER_H
#include <fstream>
#include <string>
#include <libgen.h>
#include <unistd.h>

bool log(std::string msg, std::ofstream& logFile);

#endif