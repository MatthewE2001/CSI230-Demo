/*
File: main.cpp
Assignment: Lab 10
Author: Matthew Esslie 
Date: November 8th 2020
*/
#include <iostream>
#include <vector>
#include <string>
#include "util.h"

using namespace std;

int main()
{
    //driver file here
    vector<string> strings;
    vector<double> doubleValues;
    Lab10Functions* functionCaller = new Lab10Functions();
    double doubleReturn;

    for (int i = 0; i < 5; i++)
    {
        strings.push_back(functionCaller->randomStringElement());
        doubleValues.push_back(functionCaller->randomDoubleElement());
    }

    //presumably use some functions to fill out the vectors here now
    doubleReturn = functionCaller->average(doubleValues);
    cout << doubleReturn << endl;
    
    for (int i = 0; i < 5; i++)
    {
        doubleValues.push_back(functionCaller->randomDoubleElement());
    }

    doubleReturn = functionCaller->sum(doubleValues);
    cout << doubleReturn << endl;

    for (int i = 0; i < 5; i++)
    {
        doubleValues.push_back(functionCaller->randomDoubleElement());
    }

    doubleReturn = functionCaller->lowest(doubleValues);
    cout << doubleReturn << endl;

    //now I do the camelCase thing here
    functionCaller->camelCase(strings);

    delete functionCaller;

    return 0;
}