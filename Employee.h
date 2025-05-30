#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>

class Employee {
protected:
    std::string name;
    int id;
    double baseSalary;

public:
    Employee(std::string name, int id, double baseSalary);
    virtual ~Employee(); // destructor virtual
    std::string getName() const;
    int getId() const;
    double getBaseSalary() const;
    void setBaseSalary(double salary);
    
    virtual double calculateTotalSalary() const = 0; // método abstracto
    virtual void printInfo() const = 0;              // método virtual
};

#endif
