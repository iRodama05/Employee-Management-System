# 📋 Employee-Management-System

### Context:

Efficient employee management is crucial for effectively tracking roles, salaries, and departments. An Employee Management System automates this process, making it easier to classify different types of employees and calculate their compensations based on specific roles.

An Employee Management System built in C++ addresses this challenge by creating a structured and scalable solution. By modeling different employee types in a hierarchical way, the system ensures clean code organization while allowing for easy future expansions, such as adding new roles or integrating database storage.

- Inheritance allows different employee types (e.g., Manager, Developer) to share common attributes (name, ID, base salary) while adding specialized fields (department, programming language). This avoids code duplication and improves maintainability.

- Polymorphism enables dynamic salary calculations; for example, managers might receive a fixed bonus, while developers could earn incentives based on skills. This flexibility mirrors real payroll systems.

![Employee drawio (2)](https://github.com/user-attachments/assets/ccf2733c-3940-4886-8312-5a3f987ed0fc)

### Class descriptions
#### - Employee
Defines the common interface and base properties for all types of employees. It ensures polymorphic behavior through virtual methods. It uses protected attributes such as name, id and baseSalary; public methods such as calculateTotalSalary(), getInfo(), calculateBonus(); and overloades operators as operator== (for comparing employees) and operator<< (for printing).

#### - Developer (inherits from Employee)
Represents a software developer with additional attributes related to programming skills. His attributes are programmingLanguage, skillBonus, numSkills; meanwhile their methods are setNumSkills(vector<string>) (implicitly counts skills), calculateTotalSalary() and getInfo().

#### - Manager
Models a manager who receives a fixed bonus and is assigned to a department. Has a department, a fixedBonus an various methods as alculateTotalSalary() and getInfo().

#### - Intern
Represents an intern, with compensation tied to the internship duration. Has durationMonths and methodes such as getDuration(), setDuration() and getInfo().

#### - EmployeeManager
Manages a collection of employees. Handles operations like adding, searching, listing, removing, and calculating payroll.

### How to use
After running the program, a text menu will appear in the terminal asking the user to enter the number corresponding to their selection.
![image](https://github.com/user-attachments/assets/9021a28c-c1c7-4f25-99f3-88be4628d082)


Depending on the selection, a new menu will be opened or the requested result will be displayed.

If the option to create an employee is selected, a new menu will appear, gradually requesting the corresponding information, such as name, salary, ID, etc. One area that can cause confusion is the skill bonus. Developers receive a skill bonus, which will be added to their salary depending on the number of skills.
![image](https://github.com/user-attachments/assets/4c27e103-ab71-4f04-8f3b-9f79591b52f7)


### Known Issues
1. Typing a number outside the selection menu (ex. 8) it will just show the menu again and wait for a valid imput.
2. Typing a wrong data type on an attribute (ex. String on an int attribute) will completely break the code entering a infinite loop of showing the menu (don't know how to fix this in time)
3. Not actually an issue, but more of a clarification: If you show the employee list, but there is none, it will appear to show the menu again. This is not exactly the case; it will just show a blank line. It will do teh same with ID search.
4. Not actually an error, but the code is compatible with negative numbers, so Employees can have negative salaries (they owe yo :o).
5. Listing multiples values on a single attribute (Ex. "Juanito Perez" on 'name') will also break the code and start the loop of doom and dispair.
