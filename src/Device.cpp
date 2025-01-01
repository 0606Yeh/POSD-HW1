#include "Device.h"
#ifndef DEVICE_H

void Device::addInputPin(Device* d){
    iPins.push_back(d);
}

#endif