#include "ofxNanomsgSurveyor.h"

ofxNanomsgSurveyor::ofxNanomsgSurveyor() : ofxNanomsgSocket(AF_SP, NN_SURVEYOR)
{
    
}

ofxNanomsgSurveyor::~ofxNanomsgSurveyor()
{
    ofxNanomsgSocket::shutdown();
}

int ofxNanomsgSurveyor::bind(string addr)
{
    return ofxNanomsgSocket::bind(addr);
}

int ofxNanomsgSurveyor::send(const void *data, size_t len, bool nonblocking)
{
    return ofxNanomsgSocket::send(data, len, nonblocking);
}

int ofxNanomsgSurveyor::send(void *data, size_t len, bool nonblocking)
{
    return ofxNanomsgSocket::send(data, len, nonblocking);
}

int ofxNanomsgSurveyor::send(const string &data, bool nonblocking)
{
    return ofxNanomsgSocket::send(data, nonblocking);
}

int ofxNanomsgSurveyor::send(const ofBuffer &data, bool nonblocking)
{
    return ofxNanomsgSocket::send(data, nonblocking);
}

bool ofxNanomsgSurveyor::receive(string &data, bool nonblocking)
{
    return ofxNanomsgSocket::receive(data, nonblocking);
}

bool ofxNanomsgSurveyor::getNextMessage(string &data, bool nonblocking)
{
    return ofxNanomsgSocket::getNextMessage(data, nonblocking);
}

bool ofxNanomsgSurveyor::getNextMessage(ofBuffer &data, bool nonblocking)
{
    return ofxNanomsgSocket::getNextMessage(data, nonblocking);
}

bool ofxNanomsgSurveyor::receive(ofBuffer &data, bool nonblocking)
{
    return ofxNanomsgSocket::receive(data, nonblocking);
}

void ofxNanomsgSurveyor::setTimeout(int millis)
{
    ofxNanomsgSocket::setSocketOption(NN_SURVEYOR, NN_SURVEYOR_DEADLINE, &millis, sizeof(millis));
}