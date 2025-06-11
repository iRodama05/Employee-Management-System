#include "EmployeeManager.h"
#include <iostream>

// Had to investigate how to use vectors since i forgot :(
// APA: C++ Variables de tipo vector | Aprende Programación Competitiva. (s. f.). https://aprende.olimpiada-informatica.org/cpp-vector

EmployeeManager::EmployeeManager() {}

// Adds a new employee
void EmployeeManager::addEmployee(Employee* e) {
    employees.push_back(e);
}

// search by id
vector<Employee*> EmployeeManager::searchById(int id) const {
    vector<Employee*> result;
    for (auto e : employees) { //  range-based for loop that goes trough all the elements. Auto determines the type :D
        if (e->getId() == id) result.push_back(e); // Adds an element to the end
    } //    ▲ Pointer to access the id
    return result;
}

// Remove by id. Deletes the object if found
bool EmployeeManager::removeById(int id) {
    for (auto it = employees.begin(); it != employees.end(); ++it) { // An iterator
        if ((*it)->getId() == id) {
            delete *it;
            employees.erase(it);
            return true;
        }
    }
    return false;
}

// Returns a list of all employees
vector<string> EmployeeManager::listEmployeeInfo() const {
    vector<string> infoList;
    for (Employee* e : employees) {
        infoList.push_back(e->getInfo());
    }
    return infoList;
}

// Adds the salaries.
double EmployeeManager::showTotalPayroll() const {
    double total = 0.0;
    for (Employee* e : employees) {
        total += e->calculateTotalSalary();
    }
    return total;
}
