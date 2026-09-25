
#include <iostream>                         // Includes the input-output stream library

class Counter {                             // Defines a class named Counter

private:                                    // Starts the private section
    int value;                              // Stores the counter value

public:                                     // Starts the public section

    explicit Counter(int initialValue = 0)  // Defines the constructor
        : value(initialValue) {}            // Initializes value with initialValue

    Counter& operator++() {                 // Overloads the prefix ++ operator

        ++value;                            // Increases value by 1

        return *this;                       // Returns the current object
    }

    Counter operator++(int) {               // Overloads the postfix ++ operator
                                            // The dummy int identifies postfix form

        Counter old = *this;                // Stores the old value before increment

        ++value;                            // Increases the current value by 1

        return old;                         // Returns the old value
    }

    void display() const {                  // Defines function to display value
        std::cout << value << '\n';         // Prints the current value
    }
};

int main() {                                // Starting point of the program

    Counter counter(5);                     // Creates Counter object with value 5

    std::cout << "After prefix increment: ";
    // Displays the prefix increment message

    ++counter;                              // Performs prefix increment

    counter.display();                      // Displays updated value 6

    std::cout << "Value returned by postfix increment: ";
    // Displays the postfix message

    Counter oldValue = counter++;           // Stores old value and then increments counter

    oldValue.display();                     // Displays old value 6

    std::cout << "Counter after postfix increment: ";
    // Displays message for updated counter

    counter.display();                      // Displays new counter value 7

    return 0;                               // Ends the program successfully
}

