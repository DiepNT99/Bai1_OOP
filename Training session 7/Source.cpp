// C++ program demonstrate if there
// is no virtual function used in
// the Base class
#include <iostream>
using namespace std;

// Base class declaration
class Base {
    virtual  void print()
    {
        cout << "Base" << endl;
    }
};

// Derived Class 1 declaration
class Derived1 : public Base {
    void print()
    {
        cout << "Derived1" << endl;
    }
};

// Derived class 2 declaration
class Derived2 : public Base {
    void print()
    {
        cout << "Derived2" << endl;
    }
};

// Driver Code
int main()
{
    Derived2 d1;

    // Base class pointer hold Derived1
    // class object
    Base* bp = dynamic_cast<Base*>(&d1);

    // Dynamic casting
    Derived2* dp2 = dynamic_cast<Derived2*>(bp);
    if (dp2 == nullptr)
        cout << "null" << endl;
    else
    {
        cout << "not null" << endl;
    }

    return 0;
}