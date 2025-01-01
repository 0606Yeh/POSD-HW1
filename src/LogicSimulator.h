#ifndef LOGICSIMULATOR_H
#define LOGICSIMULATOR_H
#include "Device.h"
#include "iPin.h"
#include "oPin.h"
#include "gateAND.h"
#include "gateOR.h"
#include "gateNOT.h"

#include <string>
#include <fstream>
#include <sstream>
using namespace std;

class LogicSimulator{
    private:
        vector<Device*> circuit;
        vector<iPin*> iPins;
        vector<Device*> oPins;
        vector<bool> gate_is_connect;

    public:
        ~LogicSimulator();
        vector<bool> getSimulationResult(vector<bool>);
        vector<vector<bool>> generateAllInput(int size);
        vector<vector<bool>> getTruthTable();

        Device* GateTable(int index);
        void initDevice(int input_size, int gate_size);
        void setGate(int index, string text);
        bool load(string);

        void clearDevice();

        int getiPinSize();
        int getoPinSize();
        int getGateSize();
};

#endif