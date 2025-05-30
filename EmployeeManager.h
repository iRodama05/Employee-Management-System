#ifndef EMPLOYEEMANAGER_H
#define EMPLOYEEMANAGER_H

#include <vector>
#include "Employee.h"

class EmployeeManager {
private:
    std::vector<Employee*> employees;

public:
    EmployeeManager();
    ~EmployeeManager();
    void addEmployee(Employee* e);
    std::vector<Employee*> getEmployees() const;
    double getTotalPayroll() const;
};

#endif
