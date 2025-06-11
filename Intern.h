#ifndef INTERN_H
#define INTERN_H

#include "Employee.h"

class Intern : public Employee {
protected:
    int durationMonths;

public:
    // Comstructor
    Intern(string name, int id, double baseSalary, int durationMonths);

    // Getter and setter
    int getDuration() const;
    void setDuration(int months);

    // Overrides
    double calculateTotalSalary() const override;
    string getInfo() const override;
};

#endif
