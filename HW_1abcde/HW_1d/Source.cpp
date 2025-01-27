// Attached: HW_1A(a,e)
// File: HW_1A.pdf
// =============================================================================
//
// Programmer: Alexander Villafana
// Class: CS1B
// Instructor: Med Mogasemi
// 
// =============================================================================
// Program: Volume Calculator
// =============================================================================
// Description:
// This program calculates the volume of a rectangular container. It prompts
// the user to enter dimensions (width, length, depth), validates the input,
// calculates the volume, and displays it.
// =============================================================================

#include <iostream>

using namespace std;

// Function prototypes
void getDimensions(int&, int&, int&);
bool areValid(int, int, int);
int calcVolume(int, int, int);
void displayVolume(int, int, int, int);

// ---- main ------------------------------------------------------------------
// This is the main function where the program starts. It retrieves the
// dimensions of a container, calculates its volume, and displays the result.
// ----------------------------------------------------------------------------
int main(void){
    
    // Declaring variables
    int width, length, depth;

    // Get the dimensions of the container
    getDimensions(width, length, depth);

    // Calculate the volume of the container
    int volume = calcVolume(width, length, depth);

    // Display the dimensions and volume
    displayVolume(width, length, depth, volume);

    return 0;
} // end of main

// ==== getDimensions =========================================================
// This function prompts the user to input the dimensions of a container. It
// validates the input using the areValid() function.
// 
// Input:
// width - Reference variable to store the container width.
// length - Reference variable to store the container length.
// depth - Reference variable to store the container depth.
// 
// Output:
// Stores the user input in the reference variables.
// =============================================================================
void getDimensions(int& width, int& length, int& depth){
    bool valid = false;
    
    try {
        cout << "Enter Width: ";
        cin >> width;

        cout << "Enter Length: ";
        cin >> length;

        cout << "Enter Depth: ";
        cin >> depth;

        if (areValid(width, length, depth)) {
            valid = true;
        } else {
            cout << "Invalid dimensions. Please ensure dimensions meet the criteria." << endl;
        }

    } catch (exception& e){
        cout << "Error: " << e.what();
    }
} // end of getDimensions

// ==== areValid ==============================================================
// This function validates the dimensions of the container. The dimensions
// must meet the following criteria:
// - Width: Between 5 and 20
// - Length: Between 5 and 100
// - Depth: Between 1 and 12
// 
// Input:
// width - The container width.
// length - The container length.
// depth - The container depth.
// 
// Output:
// Returns true if the dimensions are valid; otherwise, false.
// =============================================================================
bool areValid(int width, int length, int depth){

    return (width > 5 && width < 20) &&
           (length > 5 && length < 100) &&
           (depth > 1 && depth < 12);
} // end of areValid

// ==== calcVolume ============================================================
// This function calculates the volume of the container based on its dimensions.
// 
// Input:
// width - The container width.
// length - The container length.
// depth - The container depth.
// 
// Output:
// Returns the calculated volume.
// =============================================================================
int calcVolume(int width, int length, int depth){

    int volume = width * length * depth;

    return volume;
} // end of calcVolume

// ==== displayVolume =========================================================
// This function displays the dimensions and calculated volume of the container.
// 
// Input:
// width - The container width.
// length - The container length.
// depth - The container depth.
// volume - The calculated volume.
// 
// Output:
// Prints the dimensions and volume to the console.
// =============================================================================
void displayVolume(int width, int length, int depth, int volume){
    cout << "\nWidth: " << width;
    cout << "\nLength: " << length;
    cout << "\nDepth: " << depth;

    cout << "\n\nThe Volume is " << volume << " cubic feet";
} // end of displayVolume

/* ================================== Output ===================================
Enter Width: 10
Enter Length: 50
Enter Depth: 5

Width: 10
Length: 50
Depth: 5

The Volume is 2500 cubic feet
Press any key to close this window . . .
*/
