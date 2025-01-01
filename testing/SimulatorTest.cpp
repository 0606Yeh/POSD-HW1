#include "../src/LogicSimulator.h"
#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
    LogicSimulator testSimulator;
    testSimulator.load("../File_1.lcf");
    cout << "input size of gate: ";
    testSimulator.getGateiPinSize(0);

    vector<bool> input{0, 1, 1};
    cout << "Test gate with input(0, 1, 1): ";
    for(bool out: testSimulator.getSimulationResult(input)) 
        cout << out << " " << endl;  

    
}