#include "TextUI.h"

void TextUI::displayMenu(){
    cout << "1. Load logic circuit file\n";
    cout << "2. Simulation\n";
    cout << "3. Display truth table\n";
    cout << "4. Exit\n";
}

void TextUI::processCommand(int command){
    switch (command)
    {
    case 1:
        loadFile();
        break;
    case 2:
        simulation();
        break;
    case 3:
        displayTruthTable();
        break;
    case 4:
        Exit();
        break;
    default:
        break;
    }
}

void TextUI::loadFile(){
    cout << "Please key in a file path: ";
    string path;
    cin >> path;

    Circuit.load(path);
}

void TextUI::simulation(){
    vector<bool> input;
    for(int i = 0; i < Circuit.getiPinSize(); i++){
        printf("Please key in the value of input pin %d:", i + 1);
        
    }
}

void TextUI::displayTruthTable(){

}

void TextUI::Exit(){

}