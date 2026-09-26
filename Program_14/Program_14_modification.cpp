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
                                   // Overrides display function
        cout << "Derived object\n";
                                   // Displays derived object
    }
};

void displayByValue(Base object) {
                                   // Receives Base object by value
    object.display();              // Calls display after slicing
}

void displayByReference(const Base& object) {
                                   // Receives Base reference
    object.display();              // Calls virtual function
}

void displayByPointer(const Base* object) {
                                   // Receives pointer to Base
    object->display();             // Calls virtual function through pointer
}

int main() {                       // Program starts
    Derived derived;               // Creates Derived object

    cout << "Passing by value: ";
                                   // Displays value message
    displayByValue(derived);       // Passes object by value

    cout << "Passing by reference: ";
                                   // Displays reference message
    displayByReference(derived);    // Passes object by reference

    cout << "Passing by pointer: ";
                                   // Displays pointer message
    displayByPointer(&derived);    // Sends address of Derived object

    return 0;                      // Ends program
}
