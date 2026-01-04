# Attendance Management System (C)

## 📌 Project Overview
This mini project is a console-based Attendance Management System developed using the C programming language.  
The program allows a user to record, display, and analyze student attendance in a simple and structured manner.

---

## 🎯 Objective
The objective of this project is to demonstrate:
- Use of arrays in C
- Function-based program structure
- User input handling
- Basic logical operations and output formatting

---

## 🧠 Program Structure (Step-by-Step)

### 1️⃣ Input Stage – Marking Attendance
- The user enters the total number of students.
- Attendance is stored in an integer array:
  - `1` → Present
  - `0` → Absent
- Function used:
  ```c
### 1️⃣ Input Stage – Marking Attendance

**Function Used:**  
`void inputAttendance(int arr[], int n);`

**Explanation:**  
- The user enters the total number of students.
- Attendance is recorded using an integer array.
- Each student’s attendance is stored as:
  - `1` → Present
  - `0` → Absent
- A loop is used to collect attendance data for all students.


### 2️⃣ Processing Stage – Attendance Analysis

**Function Used:**  
`void analyzeAttendance(int arr[], int n);`

**Explanation:**  
- The program counts the number of present and absent students.
- Conditional statements are used to evaluate attendance values.
- Attendance percentage is calculated using the formula:

\[
Attendance\ Percentage = \frac{Number\ of\ Present\ Students}{Total\ Students} \times 100
\]


### 3️⃣ Output Stage – Displaying Results

**Function Used:**  
`void displayResult(int present, int absent, float percentage);`

**Explanation:**  
- Displays the total number of students.
- Displays the number of present and absent students.
- Displays the attendance percentage in a formatted output.


---

## Algorithm

1. Start  
2. Input the total number of students  
3. Declare an integer array to store attendance  
4. For each student, input attendance (1 or 0)  
5. Count the number of present and absent students  
6. Calculate attendance percentage  
7. Display the attendance summary  
8. End  


---

## Program Flow

The program follows a simple and structured flow:
1. **Input Stage** – Attendance data is collected from the user  
2. **Processing Stage** – Attendance data is analyzed  
3. **Output Stage** – Final results are displayed  


---

## Sample Input

Enter the number of students:  
5  

Enter attendance (1 = Present, 0 = Absent):  
1 1 0 1 0  


---

## Sample Output

Total Students: 5  
Present Students: 3  
Absent Students: 2  
Attendance Percentage: 60%  


---

## Concepts Used

- Arrays  
- Functions  
- Loops  
- Conditional Statements  
- User Input Handling  
- Basic Arithmetic Operations  


---

## Conclusion

This mini project successfully demonstrates a simple console-based Attendance Management System using the C programming language.  
It applies fundamental programming concepts such as arrays, functions, loops, and conditional logic in a structured and modular manner, making the program easy to understand and maintain.


---

## Future Enhancements

- Storing attendance data using file handling  
- Implementing a menu-driven interface  
- Adding student names or roll numbers  
- Developing a graphical user interface (GUI)  
