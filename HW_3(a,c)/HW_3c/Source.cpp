// Attached: HW_3a(a,c)
// File: HW_3(a,c).pdf
// =============================================================================
//
// Programmer: Alexander Villafana
// Class: CS1B
// Instructor: Med Mogasemi
//
// =============================================================================
// Program: Recursion to display all odd numbers from 20 to 0 (HW_3c)
// =============================================================================
// Description:
// This program uses recursion to display all odd numbers from 20 to 0.
// =============================================================================

#include <iostream>

using namespace std;

// Function protoypes
void displayOdd(int);

// === main =====================================================================
//
// =============================================================================
int main(void){

    // Display odd numbers from 20 to 0
    displayOdd(20);

    return 0;
}
// end of main

// ==== displayOdd ============================================================
// This function uses recursion to display all odd numbers from 20 to 0.
//
// Input:
// num - The number to start displaying odd numbers from.
//
// Output:
// Prints all odd numbers from 20 to 0.
// =============================================================================
void displayOdd(int num){
    // display odd numbers from 20 to 0
    // example: 19 17 15 13 11 9 7 5 3 1
    if (num > 0){
        cout << num - 1 << " ";
        displayOdd(num - 2);
    } else {
        cout << "0 ";
    }
}
// end of displayOdd

// ================================== Output ====================================
// 19 17 15 13 11 9 7 5 3 1 0
// =============================================================================
// end of source code