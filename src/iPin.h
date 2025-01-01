#include "Device.h"
#include <stdio.h>
#ifndef IPIN_H
#define IPIN_H

class iPin: public Device{
    private:
        bool value;

    public:
        void addInputPin(Device* d) override;
        bool getOutput() override;
        void setValue(bool);
        string getType();
};

#endif