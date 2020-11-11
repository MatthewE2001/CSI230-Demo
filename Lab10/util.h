/*
File: Util.h
Assignment: Lab 10
Author: Matthew Esslie 
Date: November 8th 2020
*/
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Lab10Functions
{
    private:

    public:
        Lab10Functions() {};
        ~Lab10Functions() {};

        string randomStringElement();
        double randomDoubleElement();

        //all of these might be different from void
        double sum(std::vector<double>& doubles);
        double average(std::vector<double>& doubles);
        double lowest(std::vector<double>& doubles);
        void camelCase(std::vector<string>& strings);
};