
#include <iostream>                 // Includes the input-output stream library.
using namespace std;                // Allows use of cout without std::.

class Base {                        // Defines the Base class.
public:                             // Makes the destructor public.
    virtual ~Base() {               // Defines a virtual destructor.
        cout << "Base destructor\n";// Displays the Base destructor message.
    }
};

class Derived : public Base {       // Derived inherits from Base.
public:                             // Makes the destructor public.
    ~Derived() override {           // Defines the derived destructor.
        cout << "Derived destructor\n";
                                    // Displays the Derived destructor message.
    }
};

int main() {                        // Program starts here.
    Base* pointer = new Derived();  // Creates Derived and stores it in Base pointer.

    delete pointer;                 // Deletes the object through Base pointer.

    return 0;                       // Ends the program.
}

