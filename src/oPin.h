#include "Device.h"
#include <stdio.h>
#ifndef OPIN_H
#define OPIN_H

class oPin: public Device{
    public:
        void addInputPin(Device*);
        bool getOutput();
};

#endif