#include <iostream>              // Includes input/output functionality
#include <string>                // Provides the string data type
#include <utility>               // Provides move()
using namespace std;             // Allows standard names without std::

class Employee {                 // Defines the base Employee class
protected:                       // Members can be accessed by derived classes
    int id;                      // Stores employee ID
    string name;                 // Stores employee name

public:                          // Makes following members public

    Employee(int employeeId, string employeeName)
        : id(employeeId), name(move(employeeName)) {}
                                   // Initializes employee ID and name

    virtual double calculateSalary() const = 0;
                                   // Pure virtual salary function

    virtual void displayBasicDetails() const {
                                   // Displays common employee details
        cout << "ID: " << id << '\n';
                                   // Displays employee ID

        cout << "Name: " << name << '\n';
                                   // Displays employee name
    }

    virtual ~Employee() = default;
                                   // Virtual destructor
};

class PermanentEmployee : public Employee {
                                   // PermanentEmployee inherits Employee
private:
    double basicSalary;            // Stores basic salary
    double allowance;              // Stores allowance

public:

    PermanentEmployee(
        int employeeId,
        string employeeName,
        double basic,
        double extra
    )
        : Employee(employeeId, move(employeeName)),
          basicSalary(basic),
          allowance(extra) {}
