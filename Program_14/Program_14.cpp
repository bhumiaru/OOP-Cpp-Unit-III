#include <iostream>              // Includes input/output functionality
using namespace std;             // Allows use of cout without std::

class Base {                     // Defines base class
public:

    virtual void display() const {
                                   // Defines virtual display function
        cout << "Base object\n";
                                   // Displays base object
    }

    virtual ~Base() = default;   // Virtual destructor
};

class Derived : public Base {    // Derived inherits Base
public:

    void display() const override {
                                   // Overrides Base::display()
        cout << "Derived object\n";
                                   // Displays derived object
    }
};

void displayByValue(Base object) {
                                   // Receives Base object by value
    object.display();              // Calls Base version because slicing occurs
}

void displayByReference(const Base& object) {
                                   // Receives Base reference
    object.display();              // Preserves polymorphism
}

int main() {                       // Program starts
    Derived derived;               // Creates Derived object

    cout << "Passing by value: ";
                                   // Displays first message
    displayByValue(derived);       // Passes Derived as Base by value

    cout << "Passing by reference: ";
                                   // Displays second message
    displayByReference(derived);   // Passes Derived by reference

    return 0;                      // Ends program
}
