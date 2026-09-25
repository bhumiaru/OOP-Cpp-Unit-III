
#include <iostream>                         // Includes the input-output stream library

class Base {                                // Defines the Base class

public:                                     // Starts the public section

    void display() const {                  // Defines display function in Base
        std::cout << "Base display function\n";
        // Displays the Base class message
    }
};

class Derived : public Base {               // Defines Derived class inherited from Base

public:                                     // Starts the public section

    void display() const {                  // Defines display function in Derived
        std::cout << "Derived display function\n";
        // Displays the Derived class message
    }
};

int main() {                                // Starting point of the program

    Derived derivedObject;                  // Creates an object of Derived class

    Base* basePointer = &derivedObject;     // Base pointer points to Derived object

    std::cout << "Using base pointer: ";    // Displays message for base pointer call

    basePointer->display();                 // Calls Base display due to static binding

    std::cout << "Using derived object: ";
    // Displays message for direct object call

    derivedObject.display();                // Calls Derived display directly

    return 0;                               // Ends the program successfully
}
