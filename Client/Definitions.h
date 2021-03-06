#ifndef GLOBALS_H
#define GLOBALS_H

#include <QString>
#include "ClientCore.h"


#include "time.h"
#include "math.h"

//Singleton

class Definitions {
public:
    enum RecorderState{DISABLE, RECORD, PLAY};

    QString tempDir = "./Data/Temp/";
    QString cacheDir = "./Data/Cache/";
    QString configDir = "./Data/Config/";
    //zz{
    QString logDir = "./Data/Log/";
    int clientRegPort = 8080;
    //zz}
    int publisherPort = 9090;
    int proxyPort = 6060;

    QString seekerIP = "192.168.2.150";
    int seekerPort = 7070;

    RecorderState recorderState = DISABLE;
    bool echoEnabled = true;

    bool useICNPercentage = 75;

    QByteArray clientID;

    Definitions() {
        srand(time(NULL));
        clientID = QByteArray::number((unsigned int)(rand() % 4000000000), 16).rightJustified(8, '0');
    }

    static Definitions* getInstance() {
        return instance;
    }

    static void setSeekerIP(QString ip){
        instance->seekerIP = ip;
    }

private:
    static Definitions* instance;
};

#endif // GLOBALS_H
