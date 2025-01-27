// Attached: HW_2b(a,e)
// File: HW_2b.pdf
// =============================================================================
//
// Programmer: Alexander Villafana
// Class: CS1B
// Instructor: Med Mogasemi
//
// =============================================================================
// Program: Two Dimensional Array (HW_2c)
// =============================================================================
// Description:
// Write a program that allows a user to enter a 2D array of integers and then
// displays the array in a formatted manner.
// =============================================================================

#include <iostream>
#include <iomanip>

using namespace std;

// Function prototypes
void getData(int [3][4], int, int);
void displayArray(const int [3][4], int, int);

// === main =====================================================================
//
// =============================================================================
int main(void){
    const int ROWS = 3;
    const int COLS = 4;
    int array[ROWS][COLS] = {0};

    // Get data from user
    getData(array, ROWS, COLS);

    // Display the array
    displayArray(array, ROWS, COLS);

    return 0;
} // end of main

// ==== getData ===============================================================
// This function prompts the user to input data into a 2D array. It uses nested
// for loops to iterate through the rows and columns and populate the array.
// 
// Input:
// numArray - The 2D array to populate.
// rows - The number of rows in the array.
// cols - The number of columns in the array.
// 
// Output:
// Populates the 2D array with user-provided values.
// =============================================================================
void getData(int numArray[3][4], int rows, int cols) {
    cout << "Enter values for a " << rows << "x" << cols << " array:" << endl;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "Enter value for row " << i + 1 << ", column " << j + 1 << ": ";
            cin >> numArray[i][j];
        }
    }
} // end of getData

// ==== displayArray ==========================================================
// This function clears the screen and displays the 2D array in a formatted
// table. It uses nested for loops to iterate through the rows and columns and
// displays each element aligned to the right.
// 
// Input:
// numArray - The 2D array to display.
// rows - The number of rows in the array.
// cols - The number of columns in the array.
// 
// Output:
// Displays the 2D array in a table format with aligned columns.
// =============================================================================
void displayArray(const int numArray[3][4], int rows, int cols) {
    // Clear the screen
    cout << "\033[2J\033[1;1H"; // ANSI escape sequence to clear the screen (use system("CLS") for Windows)

    cout << "The contents of the array are:" << endl;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << setw(5) << numArray[i][j] << " "; // Align numbers to the right
        }
        cout << endl; // New line after each row
    }
} // end of displayArray

/* ================================== Output ===================================
Enter values for a 3x4 array:
Enter value for row 1, column 1: 10
Enter value for row 1, column 2: 20
Enter value for row 1, column 3: 30
Enter value for row 1, column 4: 40
Enter value for row 2, column 1: 50
Enter value for row 2, column 2: 60
Enter value for row 2, column 3: 70
Enter value for row 2, column 4: 80
Enter value for row 3, column 1: 90
Enter value for row 3, column 2: 100
Enter value for row 3, column 3: 110
Enter value for row 3, column 4: 120

The contents of the array are:
   10    20    30    40
   50    60    70    80
   90   100   110   120
============================================================================= */