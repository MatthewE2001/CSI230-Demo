#include "logger.h"

bool log(std::string msg, std::ofstream& logFile)
{
    std::string strTime;
    int maxHostNameSize = 50;

    time_t logTime = time(0);
    strTime = ctime(&logTime);

    int timeSize = strTime.size();

    if(timeSize)
    {
        strTime[timeSize - 1] = ' '; //or is it " "
    }

    std::string strProgramName;
    pid_t pid = getpid();
    std::string strHostName;
    char* charHostName;
    strHostName = gethostname(charHostName, maxHostNameSize);

    if(logFile)
    {
        logFile << strTime << strHostName << " " << strProgramName << "[" << pid << "]: " << msg << std::endl;
        return true;
    }
    else
    {
        return false;
    }
}