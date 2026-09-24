#include <iostream>      // Includes the input/output library for cout
#include <string>       // Includes the string class
#include <utility>       // Includes utility functions such as std::move


// Defines a class named Person
class Person {

protected:
    std::string name;    // Protected data member to store the person's name


public:

    // Constructor of Person
    // explicit prevents unwanted automatic conversion from string to Person
    explicit Person(std::string personName)
        : name(std::move(personName))  // Initializes name using the given personName
    {
    }
    
    // Function to display the person's name
    // const means this function does not modify the object
    void displayName() const {
        std::cout << "Name: " << name << '\n';  // Prints the name
    }
};


// Student inherits publicly from Person
class Student : public Person {

private:
    int rollNumber;      // Private data member to store the student's roll number


public:

    // Constructor of Student
    // Takes studentName and roll as arguments
    Student(std::string studentName, int roll)

        // Calls the constructor of the parent class Person
        // std::move transfers studentName to the Person constructor
        : Person(std::move(studentName)),

          // Initializes rollNumber with roll
          rollNumber(roll)
    {
    }


    // Function to display student's information
    // const means this function does not modify the object
    void displayStudent() const {

        // Calls the displayName() function inherited from Person
        displayName();

        // Prints the student's roll number
        std::cout << "Roll Number: " << rollNumber << '\n';
    }
};


// Main function: program execution starts here
int main() {

    // Creates a Student object named student
    // "Amit" is passed as the name
    // 101 is passed as the roll number
    Student student("Amit", 101);

    // Calls displayStudent() to print student's details
    student.displayStudent();

    // Returns 0 to indicate successful program execution
    return 0;
}
