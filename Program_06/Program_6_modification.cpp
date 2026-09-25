
#include <iostream>                         // Includes the input-output stream library

class Distance {                            // Defines a class named Distance

private:                                    // Starts the private section
    int meters;                             // Stores distance in meters

public:                                     // Starts the public section

    explicit Distance(int value)            // Defines the constructor
        : meters(value) {}                  // Initializes meters with value

    bool operator>(const Distance& other) const {
        // Overloads the greater-than operator

        return meters > other.meters;       // Checks which distance is greater
    }

    bool operator==(const Distance& other) const {
        // Overloads the equality operator

        return meters == other.meters;      // Checks whether both distances are equal
    }

    void display() const {                  // Defines function to display distance
        std::cout << meters << " meters\n"; // Displays distance
    }
};

int main() {                                // Starting point of the program

    Distance first(120);                    // Creates first Distance object with 120 meters

    Distance second(120);                   // Creates second Distance object with 120 meters

    std::cout << "First distance: ";         // Displays first distance message
    first.display();                        // Displays first distance

    std::cout << "Second distance: ";        // Displays second distance message
    second.display();                       // Displays second distance

    if (first == second) {                  // Calls overloaded == operator
        std::cout << "Both distances are equal\n";
        // Displays message when both values are equal
    } else {                                // Executes when values are different
        std::cout << "Distances are not equal\n";
        // Displays message when distances are not equal
    }

    return 0;                               // Ends the program successfully
}
