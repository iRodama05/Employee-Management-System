#ifndef EMPLOYEEMANAGER_H
#define EMPLOYEEMANAGER_H

#include "Employee.h"

class EmployeeManager {
protected:
    vector<Employee*> employees;

public:
    EmployeeManager();
    void addEmployee(Employee* e);
    vector<Employee*> searchById(int id) const;
    bool removeById(int id);
    vector<string> listEmployeeInfo() const;
    double showTotalPayroll() const;
};

#endif
