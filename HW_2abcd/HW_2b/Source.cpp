// Attached: HW_2b(a,e)
// File: HW_2b.pdf
// =============================================================================
//
// Programmer: Alexander Villafana
// Class: CS1B
// Instructor: Med Mogasemi
//
// =============================================================================
// Program: ID Number Search (HW_2b)
// =============================================================================
// Description:
// This program declares and initializes an array of ID numbers. It prompts the
// user to enter an ID number to search for in the array. If the ID is found,
// the program displays the index of the ID. Otherwise, it informs the user
// that the ID is not in the list.
// =============================================================================

#include <iostream>
using namespace std;

// Function prototypes
void initializeArray(int[], const int);
int searchID(const int[], const int, int);
void displayResult(int, int);

// ---- main ------------------------------------------------------------------
// This is the main function where the program starts. It initializes the array
// of ID numbers, prompts the user for input, searches for the input in the
// array, and displays the results.
// ----------------------------------------------------------------------------
int main(void) {
    // Declaring constants and variables
    const int SIZE = 5;
    int idNumbers[SIZE];
    int searchIDValue = 0;
    int index = -1;

    // Initialize the array with predefined ID numbers
    initializeArray(idNumbers, SIZE);

    // Prompt user to enter an ID number to search
    cout << "Enter an ID number to search: ";
    cin >> searchIDValue;

    // Search the array for the ID number
    index = searchID(idNumbers, SIZE, searchIDValue);

    // Display the result of the search
    displayResult(index, searchIDValue);

    return 0;
} // end of main

// ==== initializeArray =======================================================
// This function initializes an array of ID numbers with predefined values.
// 
// Input:
// idNumbers - The array to initialize.
// SIZE - The size of the array.
// 
// Output:
// Initializes the array with predefined ID numbers.
// =============================================================================
void initializeArray(int idNumbers[], const int SIZE) {
    idNumbers[0] = 12345;
    idNumbers[1] = 54321;
    idNumbers[2] = 11223;
    idNumbers[3] = 33211;
    idNumbers[4] = 44411;
} // end of initializeArray

// ==== searchID ==============================================================
// This function searches the array for a given ID number. If the ID is found,
// it returns the index of the ID. If not, it returns -1.
// 
// Input:
// idNumbers - The array of ID numbers.
// SIZE - The size of the array.
// searchIDValue - The ID number to search for.
// 
// Output:
// Returns the index of the ID if found, or -1 if not found.
// =============================================================================
int searchID(const int idNumbers[], const int SIZE, int searchIDValue) {
    for (int i = 0; i < SIZE; i++) {
        if (idNumbers[i] == searchIDValue) {
            return i; // Return the index if found
        }
    }
    return -1; // Return -1 if not found
} // end of searchID

// ==== displayResult =========================================================
// This function displays the result of the search. If the index is valid, it
// shows the index where the ID was found. If not, it informs the user that the
// ID is not in the list.
// 
// Input:
// index - The index of the ID (or -1 if not found).
// searchIDValue - The ID number the user searched for.
// 
// Output:
// Displays whether the ID was found and, if so, its index.
// =============================================================================
void displayResult(int index, int searchIDValue) {
    if (index != -1) {
        cout << "ID number " << searchIDValue << " is found at index " << index << "." << endl;
    } else {
        cout << "ID number " << searchIDValue << " is not in the list." << endl;
    }
} // end of displayResult

/* ================================== Output ===================================
Example 1:
Enter an ID number to search: 54321
ID number 54321 is found at index 1.

Example 2:
Enter an ID number to search: 55555
ID number 55555 is not in the list.
============================================================================= */
