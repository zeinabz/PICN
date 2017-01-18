#ifndef HELLOREQUEST_H
#define HELLOREQUEST_H

#include "Request.h"
#include "ActiveClients.h"

class HelloRequest: public Request
{
public:
    HelloRequest();
    ~HelloRequest();

    bool processRequest(ActiveClients *clients);
};

#endif // HELLOREQUEST_H
