// Attached: HW_3a(a,c)
// File: HW_3(a,c).pdf
// =============================================================================
//
// Programmer: Alexander Villafana
// Class: CS1B
// Instructor: Med Mogasemi
//
// =============================================================================
// Program: Recursion -  Decimal to binary (HW_3a)
// =============================================================================
// Description:
// // This program will convert a decimal number to binary using recursion.
// =============================================================================

#include <iostream>

using namespace std;

// Function protoypes
void decToBinary(int);

// === main =====================================================================
//
// =============================================================================
int main(void){

    // Declare variables
    double num = 0;

    // Prompt user for input
    cout << "Enter a non negative integer: ";
    cin >> num;

    // Convert decimal to binary
    cout << "Decimal " << num << " = ";
    decToBinary(num);

    return 0;
}
// end of main

// ==== decToBinary ============================================================
// This function converts a decimal number to binary using recursion.
// 
// Input:
// num - The decimal number to convert to binary.
//
// Output:
// Prints the binary representation of the decimal number.
// =============================================================================
void decToBinary(int num){
    int base = 2;

    if (num > 0){
        decToBinary(num / base);
        cout << num % base;
    } else if (num < 0){
        cout << "Invalid entry binary ";
    } else {
        cout << "0";
    }
}
// end of decToBinary

// ================================== Output ====================================
// Enter a non negative integer: 37
// Decimal 37 = 100101

// Enter a non negative integer: 0
// Decimal 0 = 0

// Enter a non negative integer: 1
// Decimal 1 = 1

// Enter a non negative integer: -1
// Decimal -1 = Invalid entry binary 0

// =============================================================================
// end of source code