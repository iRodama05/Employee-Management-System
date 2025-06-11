#include "Developer.h"
#include "Manager.h"
#include "Intern.h"
#include "EmployeeManager.h"
#include <iostream>

int main() {
    EmployeeManager manager;

    int option;
    do {
    // I had the need to investigate how to make a While cycle in C ++ because it is apparently different from Pyhton.
    // Link from where I searched how to: https://www.w3schools.com/cpp/cpp_do_while_loop.asp
    // APA: W3Schools.com. (s. f.). https://www.w3schools.com/cpp/cpp_do_while_loop.asp

        cout << "\n1. Add Developer\n2. Add Manager\n3. Add Intern\n4. List Employees\n5. Search by ID\n6. Remove by ID\n7. Show Payroll\n0. Exit\nChoose an option: ";
        cin >> option;

        // Add Developer
        if (option == 1) {
            string name, lang; // Just found that i can do this (I ♥ Multiple variable Declaration)
            int id, skills;
            double base, bonus;
            cout << "Name: "; cin >> name;
            cout << "ID: "; cin >> id;
            cout << "Base Salary: "; cin >> base;
            cout << "Language: "; cin >> lang;
            cout << "Skill Bonus: "; cin >> bonus;
            cout << "#Skills: "; cin >> skills;
            manager.addEmployee(new Developer(name, id, base, lang, bonus, skills));

        // Add Manager
        } else if (option == 2) {
            string name, dept;
            int id;
            double base, bonus;
            cout << "Name: "; cin >> name;
            cout << "ID: "; cin >> id;
            cout << "Base Salary: "; cin >> base;
            cout << "Department: "; cin >> dept;
            cout << "Fixed Bonus: "; cin >> bonus;
            manager.addEmployee(new Manager(name, id, base, dept, bonus));

        // Add Intern
        } else if (option == 3) {
            string name;
            int id, months;
            double base;
            cout << "Name: "; cin >> name;
            cout << "ID: "; cin >> id;
            cout << "Base Salary: "; cin >> base;
            cout << "Duration (months): "; cin >> months;
            manager.addEmployee(new Intern(name, id, base, months));
        
        // Show List of Employees
        } else if (option == 4) {
            for (auto& info : manager.listEmployeeInfo()) cout << info << endl;
        
        // Search by ID
        } else if (option == 5) {
            int id;
            cout << "Enter ID: "; cin >> id;
            auto result = manager.searchById(id);
            for (auto e : result) cout << e->getInfo() << endl;
        
        // Remove by ID
        } else if (option == 6) {
            int id;
            cout << "Enter ID: "; cin >> id;
            if (manager.removeById(id)) cout << "Removed.\n";
            else cout << "Not found.\n";

        // Show total payroll
        } else if (option == 7) {
            cout << "Total Payroll: $" << manager.showTotalPayroll() << endl;
        }

    } while (option != 0); // Ends the task

    return 0;
}
