#include <vector>
#include "Device.h"
#include "iPin.h"
#include <iostream>
using namespace std;
int main(){
    vector<iPin*> a(1);
    vector<Device*> b(1);
    a[0] = new iPin;
    b[0] = a[0];
    a[0]->setValue(false);

    cout << b[0]->getOutput();
}