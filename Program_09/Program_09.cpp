
#include <iostream>                         // Includes the input-output stream library

class Animal {                              // Defines the base class Animal

public:                                     // Starts the public section

    virtual void sound() const {            // Defines a virtual sound function
        std::cout << "Animal makes a sound\n";
        // Displays the Animal sound message
    }

    virtual ~Animal() = default;            // Defines a virtual destructor
};

class Dog : public Animal {                 // Defines Dog class derived from Animal

public:                                     // Starts the public section

    void sound() const override {           // Overrides the virtual sound function
        std::cout << "Dog barks\n";         // Displays Dog's sound
    }
};

class Cat : public Animal {                 // Defines Cat class derived from Animal

public:                                     // Starts the public section

    void sound() const override {           // Overrides the virtual sound function
        std::cout << "Cat meows\n";         // Displays Cat's sound
    }
};

int main() {                                // Starting point of the program

    Dog dog;                                // Creates a Dog object

    Cat cat;                                // Creates a Cat object

    Animal* animal = &dog;                  // Base pointer points to Dog object

    animal->sound();                        // Calls Dog's sound using virtual function

    animal = &cat;                          // Base pointer now points to Cat object

    animal->sound();                        // Calls Cat's sound using virtual function

    return 0;                               // Ends the program successfully
}
