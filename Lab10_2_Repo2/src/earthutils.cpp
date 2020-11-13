#include "earthutils.h"

int processCSV(ifstream& inFile, string kmlFileName)
{
    string country;
    string city;
    string latitude;
    string longitude;
    string line;
    int recordCount{};
    ofstream kmlFile;

    if(inFile)
    {
        getline(inFile, line);
        cout << line << endl;

        kmlFile.open(kmlFileName);
        kmlFile << KML_HEADER_1 << endl;
        kmlFile << KML_HEADER_2 << endl;
        kmlFile << KML_DOC_START << endl;

        while(getline(inFile, line))
        {
            stringstream s_stream(line);
            getline(s_stream, country, ',');
            getline(s_stream, city, ',');
            getline(s_stream, latitude, ',');
            getline(s_stream, longitude, ',');

            cout << country << " " << city << " " << latitude << " " << longitude << endl;
        
            writePlacemark(kmlFile, country, city, latitude, longitude);
        }

        kmlFile << KML_DOC_END << endl;
        kmlFile << KML_FOOTER << endl;
        kmlFile.close();
        return EXIT_SUCCESS;
    }
    else
    {
        return EXIT_FAILURE;
    }
    
}

int writePlacemark(ofstream& kmlFile, string countyName, string cityName, string latitude, string longitude)
{
    if(kmlFile)
    {
        kmlFile << "<Placemark>" << endl;
        //output to concap.csv.kml here
        kmlFile << "<name>" << cityName << ", " << countyName << "</name>" << endl;
        kmlFile << "<Point>" "<coordinates>" << latitude << "," << longitude << "</coordinates>" "</Point>" << endl;
        kmlFile << "</Placemark>" << endl;

        cout << "<name>" << cityName << ", " << countyName << "</name>" << endl;
        cout << "<Point>" "<coordinates>" << longitude << "," << latitude << "</coordinates>" "</Point>" << endl;
        cout << "</Placemark>" << endl;
        return EXIT_SUCCESS;
    }
    else
    {
        return EXIT_FAILURE;
    }
    
}