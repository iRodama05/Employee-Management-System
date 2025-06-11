#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
#include <iostream>
#include <vector>
using namespace std;

class Employee {
protected:
    string name;
    int id;
    double baseSalary;

public:
    // Constructor
    Employee(string name, int id, double baseSalary);
    virtual ~Employee(); // Destructor

    // Getters
    string getName() const;
    int getId() const;
    double getBaseSalary() const;

    // Setters
    void setName(string n);
    void setId(int i);
    void setBaseSalary(double salary);

    // Virtual methodes
    virtual double calculateBonus() const;
    virtual double calculateTotalSalary() const = 0;
    virtual string getInfo() const = 0;

    // Operator overloading
    bool operator==(Employee& other) const;
    friend ostream& operator<<(ostream& os, const Employee& e);
};

#endif
