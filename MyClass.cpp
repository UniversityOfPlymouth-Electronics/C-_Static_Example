#include "MyClass.h"

//C++ 14 and earlier - we need to instantiate static objects manually (weird I know)
int MyClass::_instanceCount {0};

MyClass::MyClass(int initValue) {
    _x = initValue;
    incInstance();
    cout << "Instantiating instance: Count=" << _instanceCount << endl;
}   

MyClass::~MyClass() {
    _instanceCount--;
    cout << "Releasing instance: Count=" << _instanceCount << endl;
}

int MyClass::inc() {
    _x++;
    return _x;
}

//Can only access statics
int MyClass::getInstance() {
    return _instanceCount;
}

//Can only access statics
void MyClass::incInstance() {
    _instanceCount++;
}




