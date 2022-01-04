#include <iostream>
using namespace std;

class MyClass
{
    private:
    int _x;                     //Each instance gets an independent copy of this
    static int _instanceCount;  //This is shared with all instances

    public:
    MyClass(int initValue);  
    ~MyClass();
    int inc();

    static int getInstance();  
    static void incInstance();

    operator int() {
        return _x;
    }
};

