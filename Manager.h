#ifndef MANAGER_H
#define MANAGER_H

#include "Employee.h"

class Manager : public Employee {
private:
    std::string department;
    double fixedBonus;

public:
    Manager(std::string name, int id, double baseSalary, std::string department, double fixedBonus);
    double calculateTotalSalary() const override;
    void printInfo() const override;
    std::string getDepartment() const;
};

#endif
