#include <iostream>
#include "MyClass.h"
using namespace std;

int main()
{
    //Note how no instance of the class is needed to call getInstance() - this is because it is static
    cout << "Total number of objects instantiated = " << MyClass::getInstance() << endl;

    MyClass acc1(10);
    MyClass acc2(20);

    cout << "Total number of objects instantiated = " << MyClass::getInstance() << endl;

    cout << acc1 << endl;
    acc1.inc();
    cout << acc1 << endl;

    cout << acc2 << endl;
    acc2.inc();
    cout << acc2 << endl;    
    
    return 0;
}