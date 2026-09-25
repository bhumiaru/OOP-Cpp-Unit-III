
#include <iostream>                         // Includes the input-output stream library

class Animal {                              // Defines the base class Animal

public:                                     // Starts the public section

    virtual void sound() const {            // Defines virtual sound function
        std::cout << "Animal makes a sound\n";
        // Displays default Animal sound
    }

    virtual ~Animal() = default;            // Defines virtual destructor
};

class Dog : public Animal {                 // Defines Dog derived class

public:                                     // Starts public section

    void sound() const override {           // Overrides sound function
        std::cout << "Dog barks\n";         // Displays Dog sound
    }
};

class Cat : public Animal {                 // Defines Cat derived class

public:                                     // Starts public section

    void sound() const override {           // Overrides sound function
        std::cout << "Cat meows\n";         // Displays Cat sound
    }
};

class Cow : public Animal {                 // Defines Cow derived class

public:                                     // Starts public section

    void sound() const override {           // Overrides sound function
        std::cout << "Cow moos\n";          // Displays Cow sound
    }
};

int main() {                                // Starting point of the program

    Dog dog;                                // Creates Dog object

    Cat cat;                                // Creates Cat object

    Cow cow;                                // Creates Cow object

    Animal* animal = &dog;                  // Base pointer points to Dog

    animal->sound();                        // Calls Dog's sound

    animal = &cat;                          // Base pointer points to Cat

    animal->sound();                        // Calls Cat's sound

    animal = &cow;                          // Base pointer points to Cow

    animal->sound();                        // Calls Cow's sound

    return 0;                               // Ends the program successfully
}
