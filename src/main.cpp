#include <iostream>
#include "TextUI.h"
using namespace std;
int main(){
    TextUI control;
    while(true){
        control.displayMenu();
    
        cout << "Command:";
        int command;
        if(cin >> command){
            control.processCommand(command);
        }else{
            cout << "The command must be number.\n";
            cin.clear();
        }

        cout << endl;
    }
}