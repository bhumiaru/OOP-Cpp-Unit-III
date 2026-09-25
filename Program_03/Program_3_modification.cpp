
#include <iostream>                         // Includes the input-output stream library

class Balance {                             // Defines a class named Balance

private:                                    // Starts the private section
    int balance;                            // Declares private balance variable

public:                                     // Starts the public section

    explicit Balance(int givenBalance) : balance(givenBalance) {}
    // Constructor of Balance class
    // Stores givenBalance in balance

    Balance operator-() const {
        // Overloads the unary minus operator
        // const means the current object is not modified

        return Balance(-balance);
        // Returns a new Balance object with negative balance
    }ro

    void display() const {
        // Defines display function

        std::cout << balance << '\n';
        // Displays the balance value
    }
};

int main() {                                // Main function

    Balance original(5000);
    // Creates Balance object with balance 5000

    Balance negative = -original;
    // Calls unary minus operator
    // Converts 5000 into -5000

    std::cout << "Original balance: ";
    // Displays message

    original.display();
    // Displays 5000

    std::cout << "Negative balance: ";
    // Displays message

    negative.display();
    // Displays -5000

    return 0;                               // Ends the program successfully
}

