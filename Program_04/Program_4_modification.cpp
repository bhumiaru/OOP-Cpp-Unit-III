
#include <iostream>                         // Includes the input-output stream library

class Counter {                             // Defines a class named Counter

private:                                    // Starts the private section
    int value;                              // Stores the counter value

public:                                     // Starts the public section

    explicit Counter(int initialValue = 0)  // Defines the constructor
        : value(initialValue) {}            // Initializes value

    Counter& operator++() {                 // Overloads prefix ++ operator
        ++value;                            // Increases value by 1
        return *this;                       // Returns the current object
    }

    Counter operator++(int) {               // Overloads postfix ++ operator
        Counter old = *this;                // Stores old value
        ++value;                            // Increases value
        return old;                         // Returns old value
    }

    Counter& operator--() {                 // Overloads the prefix -- operator
        --value;                            // Decreases value by 1
        return *this;                       // Returns the current object
    }

    Counter operator--(int) {               // Overloads the postfix -- operator
        Counter old = *this;                // Stores the old value
        --value;                            // Decreases value by 1
        return old;                         // Returns the old value
    }

    void display() const {                  // Defines function to display value
        std::cout << value << '\n';         // Prints the current value
    }
};

int main() {                                // Starting point of the program

    Counter counter(5);                     // Creates counter with value 5

    std::cout << "After prefix increment: ";
    // Displays prefix increment message

    ++counter;                              // Performs prefix increment

    counter.display();                      // Displays 6

    std::cout << "Value returned by postfix increment: ";
    // Displays postfix increment message

    Counter oldValue = counter++;           // Stores old value and increments counter

    oldValue.display();                     // Displays 6

    std::cout << "Counter after postfix increment: ";
    // Displays updated counter

    counter.display();                      // Displays 7

    std::cout << "After prefix decrement: ";
    // Displays prefix decrement message

    --counter;                              // Performs prefix decrement

    counter.display();                      // Displays 6

    std::cout << "Value returned by postfix decrement: ";
    // Displays postfix decrement message

    Counter oldDecrementValue = counter--; // Stores old value and decrements counter

    oldDecrementValue.display();            // Displays old value 6

    std::cout << "Counter after postfix decrement: ";
    // Displays updated counter

    counter.display();                      // Displays 5

    return 0;                               // Ends the program successfully
}
