#include "Device.h"
#include <stdio.h>
#ifndef GATENOT_H
#define GATENOT_H

class gateNOT: public Device{
    public:
        void addInputPin(Device*);
        bool getOutput();
};

#endif