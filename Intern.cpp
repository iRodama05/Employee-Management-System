#include "Intern.h"

Intern::Intern(string name, int id, double baseSalary, int durationMonths)
    : Employee(name, id, baseSalary), durationMonths(durationMonths) {}

int Intern::getDuration() const {
    return durationMonths;
}

void Intern::setDuration(int months) {
    durationMonths = months;
}

double Intern::calculateTotalSalary() const {
    return baseSalary;
}

string Intern::getInfo() const {
    return "[Intern] " + name + ", Duration: " + to_string(durationMonths) + " months, Salary: $" + to_string(calculateTotalSalary());
}
