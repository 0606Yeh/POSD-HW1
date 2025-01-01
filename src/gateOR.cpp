#include "gateOR.h"

bool gateOR::getOutput(){
    bool out = false;

    for(Device* d: iPins)
        out = (out || d->getOutput());
    
    return out;
}