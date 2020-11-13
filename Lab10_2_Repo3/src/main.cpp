#include <iostream>
#include <pwd.h>
#include <unistd.h>
#include <libgen.h>
#include "logger.h"
#include "earthutils.h"

using namespace std;

int main(int argc, char* argv[])
{
    int opt{};
    bool kmlFlag{false};
    bool logFlag{false};
    string kmlValue;
    string logValue;
    bool optErr = true;

    //log(logValue, );

    while ((opt = getopt(argc, argv, "k:l:")) != EOF)
    {
        switch(opt)
        {
            case 'k':
                kmlFlag = true;
                kmlValue = atoi(optarg);
                break;
            case 'l':
                logFlag = true;
                logValue = optarg;
                break;
            default:
                optErr = true;
                break;
        }


    }

    if(kmlFlag && logFlag)
    {
        cout << "Flags set!" << endl;

        if (logValue.empty() || kmlValue.empty())
        {
            optErr = true;
            cout << "Option arguments are not set" << endl;
        }
        else
        {
            ofstream fLog;
            fLog.open(logValue);
            cout << logValue << " is opened" << endl;

            if(fLog)
            {
                cout << "Now starting the process" << endl;
                string programName = basename(argv[0]);
                string msg = "The kmlFile is: " + kmlValue + " and logFile is: " + logValue;
                //log(msg, programName, fLog);

                optErr = false;
                fLog.close();
                //csv file thing here
                ifstream inFile;
                kmlValue = "concap.csv";
                cout << "The kml value is: " << kmlValue << endl;
                inFile.open(kmlValue);

                if(inFile)
                {
                    int recordCount = processCSV(inFile, kmlValue + ".kml");
                    inFile.close();

                    if(recordCount)
                    {
                        cout << recordCount << " records processed" << endl;
                        optErr = false;
                    }
                    else
                    {
                        optErr = true;
                    }
                    
                }
                else
                {
                    optErr = true;
                }
                
            }
        }
    }
    else
    {
        cout << "Error - flags are not set!" << endl;
        optErr = true;
    }

    if(optErr)
    {
        return EXIT_FAILURE;
    }

    cout << "flag - kmlFlag: " << kmlFlag << " logFlag: " << logFlag << endl;
    cout << "The kmlValue is: " << kmlValue << " and the logfile is: " << logValue << endl;
    cout << "OptErr: " << optErr << endl;

    /*passwd *pws;
    pws = getpwuid(geteuid());
    cout << "User is: " << pws->pw_name << " UserID is: " << pws->pw_uid << endl;

    pid_t pid = getpid();
    string programName = basename(argv[0]);
    cout << "THe pid of: " << programName << " is: " << pid << endl;

    cout << "count of arguments: " << argc << endl;
    //cout << "Argument vector item 1: " << argv[0] << endl;
    
    for(int i = 0; i < argc; i++)
    {
        cout << argv[i] << endl;
    }

    cout << "Lab10.2" << endl;*/

    return EXIT_SUCCESS;
}