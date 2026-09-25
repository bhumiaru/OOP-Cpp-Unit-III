
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

    Base* basePointer = &derivedObject;     // Base pointer stores address of Derived object

    basePointer->display();                 // Calls Base display because function is not virtual

    return 0;                               // Ends the program successfully
}
