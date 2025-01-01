#ifndef DEVICE_H
#define DEVICE_H
#include <vector>
using namespace std;

class Device{
    protected:
        vector<Device*> iPins;
    public:
        void addInputPin(Device*);
        virtual bool getOutput() = 0;
};

#endif