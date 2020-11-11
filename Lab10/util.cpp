/*
File: Util.cpp
Assignment: Lab 10
Author: Matthew Esslie 
Date: November 8th 2020
*/
#include <iostream>
#include <vector>
#include <string>
#include "util.h"

using namespace std;

string Lab10Functions::randomStringElement()
{
    string randomString;
    int charsInString;
    string validChars = "abcdefghijklmnopqrstuvwxyz";
    char validCharacters [26];

    for(int i = 0; i < 26; i++)
    {
        validCharacters[i] = (char)i + 97;
    }

    charsInString = rand() % 10;
    
    for(int i = 0; i < charsInString; i++)
    {
        randomString += validCharacters[rand() % 26];
    }

    return randomString;
}

double Lab10Functions::randomDoubleElement()
{
    double randomDouble;

    randomDouble = (double)rand();

    return randomDouble;
}

double Lab10Functions::sum(std::vector<double>& doubles)
{
    double sum;
    int i;

    for (i = 0; i < doubles.size(); i++)
    {
        sum += doubles.front();
        doubles.pop_back();
    }

    return sum;
}

double Lab10Functions::average(std::vector<double>& doubles)
{
    double avg;
    int i;

    for (i = 0; i < doubles.size(); i++)
    {
        avg += doubles.front();
        doubles.pop_back();
    }

    avg /= (double)i;
    return avg;
}

double Lab10Functions::lowest(std::vector<double>& doubles)
{
    double lowest;
    double realLow;
    int i;

    for (i = 0; i < doubles.size(); i++)
    {
        lowest = doubles.back();
        doubles.pop_back();

        if(i == 0)
        {
            realLow = lowest;
        }

        if(realLow > lowest)
        {
            realLow = lowest;
        }
    }

    return realLow;
}

void Lab10Functions::camelCase(std::vector<string>& strings)
{
    //what do I do for camelcase?
    string megaString;

    for (int i = 0; i < strings.size(); i++)
    {
        if (i == 0)
        {
            megaString += strings.back();
            strings.pop_back();
        }
        else
        {
            string tmpString = strings.back();
            toupper(tmpString.front());
            megaString += tmpString;
        }
    }

    cout << megaString << endl;
}