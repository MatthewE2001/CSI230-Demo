/*
@file earthutils.h
@brief header file for the logging functions
@author matthew.esslie
@credit bilbo bagginss
@assignment Lab10.2
@date 11/12/20
*/

#ifndef EARTHUTILS_H
#define EARTHUTILS_H

#include <string>
#include <fstream>
#include <iostream>
#include <sstream>

using namespace std;

const string KML_HEADER_1 = "<?xml version=\"1.0\" encoding=\"UTF-8\"?>";
const string KML_HEADER_2 = "<kml xmlns=\"http://www.opengis.net/kml/2.2\">";
const string KML_FOOTER = "</kml>";
const string KML_DOC_START = "<Document>";
const string KML_DOC_END = "</Document>";

int processCSV(ifstream& inFile, string kmlFileName);
int writePlacemark(ofstream& kmlFile, string countyName, string cityName, string latitude, string longitude);

#endif