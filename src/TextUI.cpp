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
        cout << "The command must between 1 and 4.\n";
        break;
    }
}

void TextUI::loadFile(){
    cout << "Please key in a file path: ";
    string path;
    cin >> path;

    ifstream file(path);
    if(file.is_open()){
        Circuit.load(path);
        printf("Circuit: %d input pins, %d output pins and %d gates\n", 
            Circuit.getiPinSize(), Circuit.getoPinSize(), Circuit.getGateSize());
    }else{
        cout << "File not found or file format error!!\n";
    }
}

void TextUI::simulation(){
    if(Circuit.getiPinSize() == 0){
        cout << "Please load an lcf file, before using this operation.\n";
        return ;
    }

    vector<bool> input;
    for(int i = 0; i < Circuit.getiPinSize(); i++){
        printf("Please key in the value of input pin %d:", i + 1);
        char in;
        cin >> in;
        while(in != '1' && in != '0'){// check input value
            printf("The value of input pin must be 0/1\n");
            printf("Please key in the value of input pin %d:", i + 1);
            cin >> in;
        }

        input.push_back(in == '1');
    }

    vector<bool> result = Circuit.getSimulationResult(input);
    
    printf("Simulation Result:\n");
    displayResultTitle();

    // print result
    for(bool in: input) printf("%-2d", in);
    printf("|");
    for(bool out: result) printf("%2d", out);
    printf("\n");
}

void TextUI::displayTruthTable(){
    if(Circuit.getiPinSize() == 0){
        cout << "Please load an lcf file, before using this operation.\n";
        return ;
    }

    vector<vector<bool>> input = Circuit.generateAllInput(Circuit.getiPinSize());
    vector<vector<bool>> output = Circuit.getTruthTable();

    printf("Truth table:\n");
    displayResultTitle();
    
    // print all result
    for(int item = 0; item < input.size(); item++){
        for(bool in: input[item]) 
            printf("%-2d", in);
        printf("|");
        for(bool out: output[item])
            printf("%2d", out);
        printf("\n");
    }
}

void TextUI::Exit(){
    Circuit.clearDevice();
    exit(0);
}

void TextUI::displayResultTitle(){
    for(int i = 0; i < Circuit.getiPinSize(); i++) printf("i ");
    printf("|");
    for(int i = 0; i < Circuit.getoPinSize(); i++) printf(" o");
    printf("\n");
    for(int i = 0; i < Circuit.getiPinSize(); i++) printf("%-2d", i + 1);
    printf("|");
    for(int i = 0; i < Circuit.getoPinSize(); i++) printf("%2d", i + 1);
    printf("\n");
    for(int i = 0; i < Circuit.getiPinSize(); i++) printf("--");
    printf("+");
    for(int i = 0; i < Circuit.getoPinSize(); i++) printf("--");
    printf("\n");
}