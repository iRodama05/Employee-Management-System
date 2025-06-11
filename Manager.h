#ifndef MANAGER_H
#define MANAGER_H

#include "Employee.h"

class Manager : public Employee {
protected:
    string department;
    double fixedBonus;

public:
    // Constructos
    Manager(string name, int id, double baseSalary, string department, double fixedBonus);

    // Getters
    string getDepartment() const;
    double getFixedBonus() const;

    // setters
    void setDepartment(string department);
    void setFixedBonus(double bonus);

    // Overrides
    double calculateTotalSalary() const override;
    string getInfo() const override;
};

#endif
