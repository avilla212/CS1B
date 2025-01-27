// Attached: HW_1A(a,e)
// File: HW_1A.pdf
// =============================================================================
//
// Programmer: Alexander Villafana
// Class: CS1B
// Instructor: Med Mogasemi
//
// =============================================================================
// Program: Average Temperature Calculator
// =============================================================================
// Description:
// This program calculates the average temperature of three cities based on
// user input. It takes the temperatures, computes the average, and displays it
// to the user.
// =============================================================================

#include <iostream>
#include <iomanip>

using namespace std;

// Function prototypes
void getTemps(double&, double&, double&);
double calcAvg(double, double, double);
void displayAvg(double);

// ---- main ------------------------------------------------------------------
// This is the main function where the program starts. It prompts the user to
// enter temperatures of three cities, calculates the average, and displays the
// result.
// ----------------------------------------------------------------------------
int main(void){
    
    // Declaring variables
    double temp1, temp2, temp3;

    // Get the temperatures of three cities
    getTemps(temp1, temp2, temp3);

    // Calculate the average temperature
    double tempAvg = calcAvg(temp1, temp2, temp3);

    // Display the average temperature
    displayAvg(tempAvg);

    return 0;
} // end of main

// ==== getTemps ==============================================================
// This function prompts the user to input temperatures for three cities. It
// stores the values in the provided reference variables.
// 
// Input:
// temp1, temp2, temp3 - Reference variables to store user-provided temperatures.
// 
// Output:
// Stores the temperatures in the input reference variables.
// =============================================================================
void getTemps(double& temp1, double& temp2, double& temp3){
    cout << "Enter the temperatures of 3 cities: \n";
    
    cout << "#1: ";
    cin >> temp1;

    cout << "#2: ";
    cin >> temp2;

    cout << "#3: ";
    cin >> temp3;
} // end of getTemps

// ==== calcAvg ===============================================================
// This function calculates the average of three temperatures.
// 
// Input:
// temp1, temp2, temp3 - Temperatures of three cities.
// 
// Output:
// Returns the calculated average temperature.
// =============================================================================
double calcAvg(double temp1, double temp2, double temp3){
    double tempSum = temp1 + temp2 + temp3;
    double tempAvg = tempSum / 3.0;

    return tempAvg;
} // end of calcAvg

// ==== displayAvg ============================================================
// This function displays the calculated average temperature to the user in a
// formatted output.
// 
// Input:
// tempAvg - The calculated average temperature.
// 
// Output:
// Prints the average temperature to the console.
// =============================================================================
void displayAvg(double tempAvg){
    cout << fixed << setprecision(1);
    cout << "\nThe average temperature is " << tempAvg << " degrees";
} // end of displayAvg

/* ================================== Output ===================================
Enter the temperatures of 3 cities: 
#1: 72.5
#2: 68.0
#3: 75.0

The average temperature is 71.8 degrees
Press any key to close this window . . .
*/
