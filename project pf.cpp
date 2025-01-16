#include <iostream>
#include <string>
using namespace std;

struct Student {
    string name;
    int rollNumber;
    string phoneNumber;
    string fatherName;
    string adress;
};

void addStudent(Student students[], int &studentCount) {
    if (studentCount < 100) {
        cout << "Enter student name: ";
        cin >> students[studentCount].name;
        cout << "Enter student roll number: ";
        cin >> students[studentCount].rollNumber;
        cout << "Enter student phone number: ";
        cin >> students[studentCount].phoneNumber;
        cout << "Enter student father name: ";
        cin >> students[studentCount].fatherName;
        cout << "Enter student adress: ";
        cin >> students[studentCount].adress;
        studentCount++;
        cout << "Student added successfully!" << endl;
    } else {
        cout << "Student limit exceeded!" << endl;
    }
}

void removeStudent(Student students[], int &studentCount) {
    if (studentCount > 0) {
        int rollNumber;
        cout << "Enter roll number of student to remove: ";
        cin >> rollNumber;

        for (int i = 0; i < studentCount; i++) {
            if (students[i].rollNumber == rollNumber) {
                for (int j = i; j < studentCount - 1; j++) {
                    students[j] = students[j + 1];
                }
                studentCount--;
                cout << "Student removed successfully!" << endl;
                return;
            }
        }
        cout << "Student not found!" << endl;
    } else {
        cout << "No students in the database!" << endl;
    }
}

void searchStudent(Student students[], int studentCount) {
    if (studentCount > 0) {
        int rollNumber;
        cout << "Enter roll number of student to search: ";
        cin >> rollNumber;

        for (int i = 0; i < studentCount; i++) {
            if (students[i].rollNumber == rollNumber) {
                cout << "Student found!" << endl;
                cout << "Name: " << students[i].name << endl;
                cout << "Roll Number: " << students[i].rollNumber << endl;
                cout << "Phone Number: " << students[i].phoneNumber << endl;
                cout << "Father Name: " << students[i].fatherName << endl;
                cout << "adress: " << students[i].adress << endl;
                return;
            }
        }
        cout << "Student not found!" << endl;
    } else {
        cout << "No students in the database!" << endl;
    }
}

void displayStudent(Student students[], int studentCount) {
    if (studentCount > 0) {
        int rollNumber;
        cout << "Enter roll number of student to display: ";
        cin >> rollNumber;

        for (int i = 0; i < studentCount; i++) {
            if (students[i].rollNumber == rollNumber) {
                cout << "Student found!" << endl;
                cout << "Name: " << students[i].name << endl;
                cout << "Roll Number: " << students[i].rollNumber << endl;
                cout << "Phone Number: " << students[i].phoneNumber << endl;
                cout << "Father Name: " << students[i].fatherName << endl;
                cout << "adress: " << students[i].adress << endl;
                return;
            }
        }
        cout << "This Student not found!" << endl;
    } else {
        cout << "There are no students currently in the database. Please add some students." << endl;
    }
}

void updateStudent(Student students[], int studentCount) {
    if (studentCount > 0) {
        int rollNumber;
        cout << "Please enter the roll number of the student whose details you want to update: ";
        cin >> rollNumber;

        for (int i = 0; i < studentCount; i++) {
            if (students[i].rollNumber == rollNumber) {
                cout << "Enter new name: ";
                cin >> students[i].name;
                cout << "Enter new phone number: ";
                cin >> students[i].phoneNumber;
                cout << "Enter new father name: ";
                cin >> students[i].fatherName;
                cout << "Enter new adress: ";
                cin >> students[i].adress;
                cout << "Student updated successfully!" << endl;
                return;
            }
        }
        cout << "Sorry, no student found with the given roll number." << endl;
    } else {
        cout << "No students in the database!" << endl;
    }
}

int main() {
    Student students[100];
    int studentCount = 0;
    int choice;

    while (true) {
        cout << "\nStudent Database Menu:\n";
        cout << "1. Add Student\n";
        cout << "2. Remove Student\n";
        cout << "3. Search Student\n";
        cout << "4. Display Student\n";
        cout << "5. Update Student\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        if (choice == 1) {
            addStudent(students, studentCount);
        } else if (choice == 2) {
            removeStudent(students, studentCount);
        } else if (choice == 3) {
            searchStudent(students, studentCount);
        } else if (choice == 4) {
            displayStudent(students, studentCount);
        } else if (choice == 5) {
            updateStudent(students, studentCount);
        } else if (choice == 6) {
            cout << "The program is now terminating." << endl;
            break;
        } else {
            cout << "Invalid choice! Please try again." << endl;
        }
    }

    return 0;
}