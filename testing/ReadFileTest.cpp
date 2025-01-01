#include "../src/LogicSimulator.h"
#include <stdio.h>
#include <iostream>
using namespace std;

int main(){
    LogicSimulator testCircuit;
    testCircuit.load("../File_1.lcf");

    printf("Circuit: %d input pins, %d output pins and %d gates\n", 
            testCircuit.getiPinSize(), testCircuit.getoPinSize(), testCircuit.getGateSize());

    for(int gate_num = 0; gate_num < testCircuit.getGateSize(); gate_num++){
        testCircuit.getGateType(gate_num);
    }
}