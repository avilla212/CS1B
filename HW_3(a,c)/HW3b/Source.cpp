// Attached: HW_3a(a,c)
// File: HW_3(a,c).pdf
// =============================================================================
//
// Programmer: Alexander Villafana
// Class: CS1B
// Instructor: Med Mogasemi
//
// =============================================================================
// Program: Recursion to display all even numbers from 1 to 20, including 20 (HW_3c)
// =============================================================================
// Description:
// This program uses recursion to display all even numbers from 1 to 20, including 20.
// =============================================================================

#include <iostream>

using namespace std;

// Function protoypes
void displayEven(int);

// === main =====================================================================
//
// =============================================================================
int main(void){

    // Display even numbers from 1 to 20
    displayEven(20);

    return 0;
}

// ==== displayEven ============================================================
// This function uses recursion to display all even numbers from 1 to 20, including 20.
//
// Input:
// num - The number to start displaying even numbers from.
//
// Output:
// Prints all even numbers from 1 to 20, including 20.
// =============================================================================
void displayEven(int num){
    if (num > 0){
        displayEven(num - 2);
        cout << num << " ";
    } else {
        cout << "0 ";
    }
}
// end of displayEven

// ================================== Output ====================================
// 0 2 4 6 8 10 12 14 16 18 20
// =============================================================================
// end of source code