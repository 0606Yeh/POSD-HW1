#ifndef TEXTUI_H
#define TEXTUI_H
#include "LogicSimulator.h"
#include <iostream> 
#include <string>
using namespace std;


class TextUI{
    private:
        LogicSimulator Circuit;
    public:
        void displayMenu();
        void processCommand(int);

        void loadFile();
        void simulation();
        void displayTruthTable();
        void Exit();
};

#endif
