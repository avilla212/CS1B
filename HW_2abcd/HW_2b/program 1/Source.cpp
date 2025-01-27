// Attached: HW_#2B
// File: HW_2b.pdf
// =============================================================================
//
// Programmer: Alexander Villafana
// Class: CS1B
// Instructor: Med Mogasemi
//
// =============================================================================
// Program: Create list of 10 random integers 
// =============================================================================
// Description:
// Create a list of 10 random integers between 1 and 100
// =============================================================================

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

// Function prototypes
void getValues(int [], int);
void printArray(int [], int);

int main(void){
    const int SIZE = 10;
    int numbers[SIZE] = {0};

    // Initialize random seed
    srand(time(0));

    // Fill array with random values
    getValues(numbers, SIZE);

    // Print array
    printArray(numbers, SIZE);

    return 0;
} // end of main

// ==== getValues ===============================================================
// This function will fill an array with random values between 1 and 100
//
// Input: int numbers[] - an array of integers
//        int size - the size of the array
// Output: None
// =============================================================================
void getValues(int numbers[], int size){
    for (int i = 0; i < size; i++){
        // Generate random number between 1 and 100
        numbers[i] = (rand() % 100) + 1;
    }
} // end of getValues

// ==== printArray ===============================================================
// This function will print the values of an array
//
// Input: int numbers[] - an array of integers
//        int size - the size of the array
// Output: None

void printArray(int numbers[], int size){
    for (int i = 0; i < size; i++){
        cout << numbers[i] << " ";
    }
    cout << endl;
} // end of printArray

// === Output ====================================================================
// 59 44 22 72 68 63 43 77 5 49 
// 85 27 64 70 80 9 75 27 26 33 
// =============================================================================


