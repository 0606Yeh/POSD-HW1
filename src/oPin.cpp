#include "oPin.h"

void oPin::addInputPin(Device* d){
    if(iPins.size() < 0)
        iPins.push_back(d);
    else
        printf("Error:  output pin can't add more than one input pin");
}

bool oPin::getOutput(){
    return iPins[0]->getOutput();
}