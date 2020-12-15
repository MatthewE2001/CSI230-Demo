#include <iostream>
#include "File.h"

using namespace std;

int main(int argc, char* argv[])
{   
    Sorting libObject;

    libObject.searchTemps();
    libObject.sortValues();

    cout << " " << endl;
    cout << "Output to a file will now begin" << endl;

    libObject.outputInfo();

    return 0;
}