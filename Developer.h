#ifndef DEVELOPER_H
#define DEVELOPER_H

#include "Employee.h"

class Developer : public Employee {
protected:
    string programmingLanguage;
    double skillBonus;
    int numSkills;

public:
    // Constructor
    Developer(string name, int id, double baseSalary, string programmingLanguage, double skillBonus, int numSkills);

    // Getters and setters
    string getProgrammingLanguage() const;
    double getSkillBonus() const;
    int getNumSkills() const;

    void setProgrammingLanguage(string lang);
    void setSkillBonus(double bonus);
    void setNumSkills(int n);
    void setNumSkills(vector<string> skills);

    // Overrides
    double calculateTotalSalary() const override;
    string getInfo() const override;
};

#endif
