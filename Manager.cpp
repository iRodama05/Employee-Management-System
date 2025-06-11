#include "Manager.h"

Manager::Manager(string name, int id, double baseSalary, string department, double fixedBonus)
    : Employee(name, id, baseSalary), department(department), fixedBonus(fixedBonus) {}

string Manager::getDepartment() const {
    return department;
}

double Manager::getFixedBonus() const {
    return fixedBonus;
}

void Manager::setDepartment(string dept) {
    department = dept;
}

void Manager::setFixedBonus(double bonus) {
    fixedBonus = bonus;
}

double Manager::calculateTotalSalary() const {
    return baseSalary + fixedBonus;
}

string Manager::getInfo() const {
    return "[Manager] " + name + ", Department: " + department + ", Total Salary: $" + to_string(calculateTotalSalary());
}