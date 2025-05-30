#ifndef INTERN_H
#define INTERN_H

#include "Employee.h"

class Intern : public Employee {
private:
    int durationMonths;

public:
    Intern(std::string name, int id, double baseSalary, int durationMonths);
    double calculateTotalSalary() const override;
    void printInfo() const override;
    int getDuration() const;
};

#endif
