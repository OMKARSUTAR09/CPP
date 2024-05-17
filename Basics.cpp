#include <iostream>
using namespace std;

// Base class 1
class A {
public:
    A() {
        cout << "Constructor of class A" << endl;
    }

    ~A() {
        cout << "Destructor of class A" << endl;
    }
};

// Base class 2
class B {
public:
    B() {
        cout << "Constructor of class B" << endl;
    }

    ~B() {
        cout << "Destructor of class B" << endl;
    }
};

// Derived class from both A and B
class C : public A, public B {
public:
    C() {
        cout << "Constructor of class C" << endl;
    }

    ~C() {
        cout << "Destructor of class C" << endl;
    }
};

int main() {
    C obj;
    return 0;
}
