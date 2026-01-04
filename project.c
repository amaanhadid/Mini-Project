

#include <stdio.h>

/*
 Student Attendance Management System
 Uses 1D arrays, loops, conditions, and functions
 1 = Present, 0 = Absent
*/

// Function to mark attendance
void markAttendance(int attendance[], int n) {
    int i;
    printf("\nEnter attendance for each student (1 = Present, 0 = Absent):\n");
    for (i = 0; i < n; i++) {
        printf("Student %d: ", i + 1);
        scanf("%d", &attendance[i]);
    }
}

// Function to display attendance
void displayAttendance(int attendance[], int n) {
    int i;
    printf("\n--- Attendance Record ---\n");
    for (i = 0; i < n; i++) {
        if (attendance[i] == 1)
            printf("Student %d: Present\n", i + 1);
        else
            printf("Student %d: Absent\n", i + 1);
    }
}

// Function to count present and absent students
void countAttendance(int attendance[], int n) {
    int i, present = 0, absent = 0;

    for (i = 0; i < n; i++) {
        if (attendance[i] == 1)
            present++;
        else
            absent++;
    }

    printf("\nTotal Present Students: %d\n", present);
    printf("Total Absent Students: %d\n", absent);
}

int main() {
    int n;

    printf("Enter number of students: ");
    scanf("%d", &n);

    int attendance[n]; // 1D integer array

    markAttendance(attendance, n);
    displayAttendance(attendance, n);
    countAttendance(attendance, n);

    return 0;
}