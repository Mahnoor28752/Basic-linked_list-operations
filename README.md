# Student Management System

A simple C++ program implementing a **Student Management System** using linked lists. This program allows you to manage student data such as name, roll number, and GPA through a menu-driven interface. Key features include adding students, updating names to uppercase, displaying students, merging lists, and deleting nodes.

## Features
- **Add Student**: Add a student's data at the end or beginning of the list.
- **Display Students**: View all student records stored in the linked list.
- **Display Highest GPA**: Show students with a GPA higher than 3.5.
- **Update Names to Uppercase**: Convert all student names to uppercase.
- **Merge Linked Lists**: Merge two separate linked lists into one.
- **Delete Node**: Remove a student record from the start or end of the list.

## How to Use
1. Clone the repository.
2. Compile the code with a C++ compiler:
   ```bash
   g++ -o student_management student_management.cpp
3 Run the executable
./student_management
4 Use the menu options to manage student data.
Menu Options
1 - Add student data to the end of the list.
2 - Add student data at the start of the list.
3 - Display all students.
4 - Display students with a GPA greater than 3.5.
5 - Update all names to uppercase.
6 - Merge a second linked list into the first.
7 - Delete node from the start of the list.
8 - Delete node from the end of the list.
9 - Exit the program.
Code Structure
The code is structured with a node structure and a list class:

struct node - Holds student details (name, roll number, GPA) and a pointer to the next node.
class list - Manages linked list operations including adding, displaying, updating, merging, and deleting nodes.
Future Improvements
Implement more robust error handling.
Allow updates to individual student records.
Improve the user interface for a better experience.
License
This project is licensed under the MIT License.
