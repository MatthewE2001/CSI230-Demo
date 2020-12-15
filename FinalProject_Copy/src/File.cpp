#include "File.h"

using namespace std;

void Sorting::searchTemps()
{
    //maybe set some values up here
    for (int i = 0; i < 50; i++)
    {
        //I wanna find a way to put in some temperature values
        tempValues[i] = rand() % 100;
    }

    ifstream input;
    string tmpCity;
    input.open("cities.txt");

    for(int i = 0; i < 25; i++)
    {
        getline(input, tmpCity);
        cities[i] = tmpCity;
    }

    return;
}

void Sorting::sortValues()
{
    //BOOST_SORT_SPREADSORT_DETAIL_INTEGER_SORT_HPP 
    //(tempValues[0], tempValues[50]);

    for(int i = 0; i < 50; i++)
    {
        cout << tempValues[i] << endl;
    }
}

void Sorting::outputInfo()
{
    ofstream output;

    output.open("climate.txt");
    
    for(int i = 0; i < 25; i++)
    {
        output << cities[i];
        output << ", ";
        output << tempValues[i] << endl;
    }

    output.close();
}