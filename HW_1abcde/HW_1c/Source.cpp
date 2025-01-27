// Attached: HW_1A(a,e)
// File: HW_1A.pdf
// =============================================================================
//
// Programmer: Moe Mogasemi
// Class: CS1B
// Instructor: Med Mogasemi
//
// =============================================================================
// Program: Student Record Management
// =============================================================================
// Description:
// This program allows users to input a student record including ID, name, and
// GPA. It validates the input and displays the record to the user.
// =============================================================================

#include "prototypes.h"

using namespace std;

// ---- main ------------------------------------------------------------------
// This is the main function where the program starts. It retrieves a student
// record from the user and displays it.
// ----------------------------------------------------------------------------
int main(void){
    
    // Declaring variables
    int id{};
    string name{};
    double gpa{};

    // Get the student record
    getRecord(id, name, gpa);

    // Display the student record
    displayRecord(id, name, gpa);

    return 0;
} // end of main

// ==== getRecord =============================================================
// This function prompts the user to input a student record including ID, name,
// and GPA. It performs basic validation and stores the data in the provided
// reference variables.
// 
// Input:
// id - Reference variable to store the student ID.
// name - Reference variable to store the student name.
// gpa - Reference variable to store the student GPA.
// 
// Output:
// Stores the user input in the reference variables.
// =============================================================================
void getRecord(int& id, string& name, double& gpa){
    try {
        cout << "Enter a student record:\n";

        cout << "ID: ";
        cin >> id;
        cin.ignore();

        cout << "NAME: ";
        getline(cin, name);

        cout << "GPA: ";
        cin >> gpa;
    } catch (exception& e){
        cout << "Error: " << e.what() << endl;
    }
} // end of getRecord

// ==== displayRecord =========================================================
// This function displays the student record, including ID, name, and GPA, in
// a formatted output.
// 
// Input:
// id - The student ID.
// name - The student name.
// gpa - The student GPA.
// 
// Output:
// Prints the student record to the console.
// =============================================================================
void displayRecord(int id, string name, double gpa){
    cout << "\nSTUDENT RECORD\n";
    cout << "ID: "    << id;
    cout << "\nNAME: "  << name;
    cout << "\nGPA: " << gpa;
} // end of displayRecord

/* ================================== Output ===================================
Enter a student record:
ID: 12345
NAME: John Doe
GPA: 3.75

STUDENT RECORD
ID: 12345
NAME: John Doe
GPA: 3.75
Press any key to close this window . . .
*/
