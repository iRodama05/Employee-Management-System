#include "Employee.h"

Employee::Employee(string name, int id, double baseSalary)
    : name(name), id(id), baseSalary(baseSalary) {}

Employee::~Employee() {}

string Employee::getName() const {
    return name;
}

int Employee::getId() const {
    return id;
}

double Employee::getBaseSalary() const {
    return baseSalary;
}

void Employee::setName(string n) {
    name = n;
}

void Employee::setId(int i) {
    id = i;
}

void Employee::setBaseSalary(double salary) {
    baseSalary = salary;
}

double Employee::calculateBonus() const {
    return baseSalary * 0.1;
}

bool Employee::operator==(Employee& other) const {
    return id == other.id;
}

ostream& operator<<(ostream& os, const Employee& e) {
    os << e.getInfo();
    return os;
}
