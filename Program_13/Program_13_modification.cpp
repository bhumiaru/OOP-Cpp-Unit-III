
#include <iostream>                 // Includes the input-output stream library.
#include <memory>                   // Includes smart pointer support.
using namespace std;                // Allows use of standard names without std::.

class Base {                        // Defines the Base class.
public:                             // Makes the destructor public.
    virtual ~Base() {               // Defines a virtual destructor.
        cout << "Base destructor\n";// Displays the Base destructor message.
    }
};

class Derived : public Base {       // Derived inherits from Base.
public:                             // Makes the destructor public.
    ~Derived() override {           // Defines the Derived destructor.
        cout << "Derived destructor\n";
                                    // Displays the Derived destructor message.
    }
};

int main() {                        // Program starts here.
    unique_ptr<Base> pointer =
        make_unique<Derived>();     // Creates Derived using a unique pointer.

    return 0;                       // unique_ptr automatically cleans up the object.
}

