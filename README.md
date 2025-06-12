# 📋 Employee-Management-System

### Context:

Efficient employee management is crucial for effectively tracking roles, salaries, and departments. An Employee Management System automates this process, making it easier to classify different types of employees and calculate their compensations based on specific roles.

An Employee Management System built in C++ addresses this challenge by creating a structured and scalable solution. By modeling different employee types in a hierarchical way, the system ensures clean code organization while allowing for easy future expansions, such as adding new roles or integrating database storage.

- Inheritance allows different employee types (e.g., Manager, Developer) to share common attributes (name, ID, base salary) while adding specialized fields (department, programming language). This avoids code duplication and improves maintainability.

- Polymorphism enables dynamic salary calculations; for example, managers might receive a fixed bonus, while developers could earn incentives based on skills. This flexibility mirrors real payroll systems.

![Employee drawio (2)](https://github.com/user-attachments/assets/ccf2733c-3940-4886-8312-5a3f987ed0fc)

### Class descriptions
#### Employee
Defines the common interface and base properties for all types of employees. It ensures polymorphic behavior through virtual methods. It uses protected attributes such as name, id and baseSalary; public methods such as calculateTotalSalary(), getInfo(), calculateBonus(); and overloades operators as operator== (for comparing employees) and operator<< (for printing).

#### Developer (inherits from Employee)
Represents a software developer with additional attributes related to programming skills. His attributes are programmingLanguage, skillBonus, numSkills; meanwhile their methods are setNumSkills(vector<string>) (implicitly counts skills), calculateTotalSalary() and getInfo().

#### Manager
Models a manager who receives a fixed bonus and is assigned to a department. Has a department, a fixedBonus an various methods as alculateTotalSalary() and getInfo().

#### Intern
Represents an intern, with compensation tied to the internship duration. Has durationMonths and methodes such as getDuration(), setDuration() and getInfo().

#### EmployeeManager
Manages a collection of employees. Handles operations like adding, searching, listing, removing, and calculating payroll.

