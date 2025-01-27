// Attached: HW_2B(a,d)
// File: HW_2B.pdf
// ==============================================================================
//
// Programmer: Alexander Villafana
// Class: CS1B
// Instructor: Med Mogasemi
//
// ==============================================================================
// Display information about a person (HW_2a)
// ==============================================================================
// Description:
// This program will display information about a person using c-strings
// ==============================================================================

#include <iostream>
#include <string>
#include <cstring>

using namespace std;



// Function prototypes
void displayInfo(char* fullName, int age);

// === main =====================================================================
//
// ==============================================================================
int main(void){
    // Declare variables
    int age {};
    char firstName[10] = "John";
    char lastName[10];
    char fullName[20];

    // Get user input
    cout << "Enter age: ";
    cin >> age;
    cin.ignore();

    // Get last name
    cout << "Enter last name: ";
    cin.getline(lastName, 10);

    // Assign firstName and lastName to fullName
    strcpy(fullName, firstName);
    strcat(fullName, " ");
    strcat(fullName, lastName);

    // Display information
    displayInfo(fullName, age);

    return 0;
} // end of main

// === displayInfo ============================================================
// This function will display information about a person
//
// Input: char* fullName - the full name of the person
//        int age - the age of the person
// Output: None
// =============================================================================
void displayInfo(char* fullName, int age){
    cout << "Full name: " << fullName << endl;
    cout << "Age: " << age << endl;
}
