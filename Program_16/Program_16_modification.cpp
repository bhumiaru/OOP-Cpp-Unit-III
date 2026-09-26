#include <iostream>              // Includes input/output functionality
#include <string>                // Provides string data type
#include <utility>               // Provides move()
#include <memory>                // Provides unique_ptr and make_unique
#include <vector>                // Provides vector
using namespace std;             // Allows standard names without std::

class Employee {                 // Defines the base Employee class
protected:
    int id;                      // Stores employee ID
    string name;                 // Stores employee name

public:

    Employee(int employeeId, string employeeName)
        : id(employeeId), name(move(employeeName)) {}
                                   // Initializes ID and name

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
    double taxRate;                // Stores tax percentage

public:

    PermanentEmployee(
        int employeeId,
        string employeeName,
        double basic,
        double extra,
        double tax
    )
        : Employee(employeeId, move(employeeName)),
          basicSalary(basic),
          allowance(extra),
          taxRate(tax) {}
                                   // Initializes all permanent employee data

    double calculateSalary() const override {
                                   // Calculates permanent employee salary

        double grossSalary = basicSalary + allowance;
                                   // Calculates gross salary

        double tax = grossSalary * taxRate / 100.0;
                                   // Calculates tax amount

        return grossSalary - tax;
                                   // Returns salary after tax
    }
};

class ContractEmployee : public Employee {
                                   // ContractEmployee inherits Employee
private:
    double hourlyRate;             //
