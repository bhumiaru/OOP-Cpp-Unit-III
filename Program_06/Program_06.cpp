
#include <iostream>                         // Includes the input-output stream library

class Distance {                            // Defines a class named Distance

private:                                    // Starts the private section
    int meters;                             // Stores distance in meters

public:                                     // Starts the public section

    explicit Distance(int value)            // Defines the constructor
        : meters(value) {}                  // Initializes meters with value

    bool operator>(const Distance& other) const {
        // Overloads the greater-than operator

        return meters > other.meters;       // Compares the two distance values
    }

    void display() const {                  // Defines function to display distance
        std::cout << meters << " meters\n"; // Prints distance followed by meters
    }
};

int main() {                                // Starting point of the program

    Distance first(120);                    // Creates first Distance object with 120 meters

    Distance second(90);                    // Creates second Distance object with 90 meters

    std::cout << "First distance: ";         // Displays first distance message
    first.display();                        // Displays first distance

    std::cout << "Second distance: ";        // Displays second distance message
    second.display();                       // Displays second distance

    if (first > second) {                   // Checks whether first distance is greater
        std::cout << "First distance is greater\n";
        // Displays message if first is greater
    } else {                                // Executes when first is not greater
        std::cout << "Second distance is greater or equal\n";
        // Displays the alternative message
    }

    return 0;                               // Ends the program successfully
}
