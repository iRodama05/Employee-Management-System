#include "Developer.h"

Developer::Developer(string name, int id, double baseSalary, string programmingLanguage, double skillBonus, int numSkills)
    : Employee(name, id, baseSalary), programmingLanguage(programmingLanguage), skillBonus(skillBonus), numSkills(numSkills) {}

string Developer::getProgrammingLanguage() const {
    return programmingLanguage;
}

double Developer::getSkillBonus() const {
    return skillBonus;
}

int Developer::getNumSkills() const {
    return numSkills;
}

void Developer::setProgrammingLanguage(string lang) {
    programmingLanguage = lang;
}

void Developer::setSkillBonus(double bonus) {
    skillBonus = bonus;
}

void Developer::setNumSkills(int n) {
    numSkills = n;
}

void Developer::setNumSkills(vector<string> skills) {
    numSkills = skills.size();
}

double Developer::calculateTotalSalary() const {
    return baseSalary + (skillBonus * numSkills);
}

string Developer::getInfo() const {
    return "[Developer] " + name + ", Language: " + programmingLanguage + ", Skills: " + to_string(numSkills) + ", Total Salary: $" + to_string(calculateTotalSalary());
}