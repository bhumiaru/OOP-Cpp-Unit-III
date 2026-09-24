#include <iostream>      // Provides std::cout for displaying output
#include <string>        // Provides std::string for storing text
#include <utility>       // Provides std::move()


// Defines a class named Employee
class Employee {

protected:
    // Protected member variable that stores the employee's name
    // "protected" means the class itself and its derived classes can access it
    std::string name;


public:

    // Constructor of Employee
    // Takes the employee's name as a parameter
    explicit Employee(std::string employeeName)

        // Initializer list
        // std::move transfers the value of employeeName into name
        : name(std::move(employeeName))
    {
        // Constructor body is empty
    }
};


// Developer inherits publicly from Employee
// Employee = Parent/Base class
// Developer = Child/Derived class
class Developer : public Employee {

private:

    // Stores the programming language known by the developer
    // private means it can only be directly accessed inside Developer
    std::string language;


public:

    // Constructor of Developer
    // Takes two parameters:
    // employeeName = name of the developer
    // programmingLanguage = programming language
    Developer(std::string employeeName, std::string programmingLanguage)

        // Calls the constructor of the parent class Employee
        // Passes employeeName to Employee
        : Employee(std::move(employeeName)),

          // Initializes the language member
          // Moves programmingLanguage into language
          language(std::move(programmingLanguage))
    {
        // Constructor body is empty
    }


    // Function to display developer information
    // const means this function will not modify the object
    void display() const {

        // std::cout is used to print output
        // name is inherited from Employee
        std::cout << "Developer: " << name << '\n';

        // Prints the programming language
        std::cout << "Language: " << language << '\n';
    }
};


// Program execution starts from main()
int main() {

    // Creates an object called developer
    // "Neha" is passed as employeeName
    // "C++" is passed as programmingLanguage
    Developer developer("Neha", "C++");

    // Calls the display() function of the Developer class
    developer.display();

    // Returns 0 to indicate successful execution
    return 0;
}
