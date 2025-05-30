#ifndef DEVELOPER_H
#define DEVELOPER_H

#include "Employee.h"

class Developer : public Employee {
private:
    std::string programmingLanguage;
    double skillBonus;
    int numSkills;

public:
    Developer(std::string name, int id, double baseSalary, std::string language, double skillBonus, int numSkills);
    double calculateTotalSalary() const override;
    void printInfo() const override;
    std::string getProgrammingLanguage() const;
};

#endif
