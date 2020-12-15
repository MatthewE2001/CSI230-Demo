#pragma once

#include <iostream>
#include <fstream>
#include <string>
#include <boost/sort/spreadsort/spreadsort.hpp>
#include <boost/sort/sort.hpp>

using namespace std;

class Sorting
{
    private:
        string mFilename;
        int tempValues[50];
        string cities[50];
        
    public:
        Sorting();
        ~Sorting();

        void searchTemps();
        string getFilename();
        void sortValues();
        void outputInfo();
};