// Attached: HW_1A(a,e)
// File: HW_1A.pdf
// =============================================================================
//
// Programmer: Moe Mogasemi
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
double getSalesAmt(double& );
double calcCommission(double& );
double calcPay(double&);
void displayPay(double& salesAmt, double& commission, const double& basePay, double& pay);

// ---- main ------------------------------------------------------------------
// This is the main function where the program starts. It declares variables
// for sales amount, commission, base pay, and total pay. It then calls the
// respective functions to calculate and display the results.
// ----------------------------------------------------------------------------
int main(void){
    
    // Declaring variables
    double salesAmt = 0.0;
    double commission = 0.0;
    double pay = 0.0;
    const double BASE_PAY = 2500.00;

    // Get the sales amount from the user
    getSalesAmt(salesAmt);

    // Calculate the commission based on the sales amount
    commission = calcCommission(salesAmt);

    // Calculate the total pay (base pay + commission)
    pay = calcPay(commission);

    // Display the sales amount, commission, base pay, and total pay
    displayPay(salesAmt, commission, BASE_PAY, pay);
    
} // end of main

// ==== getSalesAmt ===========================================================
// This function prompts the user to input their monthly sales amount. It
// returns the sales amount to the main function.
// 
// Input:
// salesAmt - Reference variable to store the user-provided sales amount.
// 
// Output:
// Returns the user-provided sales amount.
// =============================================================================
double getSalesAmt(double& salesAmt){
    cout << "Enter monthly sales amount: ";
    cin >> salesAmt;

    return salesAmt;
} // end of getSalesAmt

// ==== calcCommission ========================================================
// This function calculates the commission based on the sales amount. It uses
// a tiered system:
// - 2% commission for sales over $50,000
// - 1.5% commission for sales over $25,000 but less than or equal to $50,000
// - No commission for sales $25,000 or below.
// 
// Input:
// salesAmt - The sales amount provided by the user.
// 
// Output:
// Returns the calculated commission.
// =============================================================================
double calcCommission(double& salesAmt){
    double commission = 0.0;
    
    // Commission is 2% of the sales amount
    if (salesAmt > 50000){
        commission = salesAmt * 0.02;
    // Commission is 1.5% of the sales amount 
    } else if (salesAmt > 25000){
        commission = salesAmt * 0.015;
    } 

    // Commission is None
    return commission;
} // end of calcCommission

// ==== calcPay ===============================================================
// This function calculates the total pay by adding the base pay to the
// commission.
// 
// Input:
// commission - The commission calculated based on sales amount.
// 
// Output:
// Returns the total pay (base pay + commission).
// =============================================================================
double calcPay(double& commission){
    const double BASE_PAY = 2500.00;
    double pay = 0.0;

    pay = BASE_PAY + commission;

    return pay;
} // end of calcPay

// ==== displayPay ============================================================
// This function displays the sales amount, commission, base pay, and total pay
// to the user in a formatted output.
// 
// Input:
// salesAmt - The sales amount provided by the user.
// commission - The calculated commission based on sales amount.
// basePay - The base pay (constant value).
// pay - The total pay (base pay + commission).
// 
// Output:
// Prints the details to the console.
// =============================================================================
void displayPay(double& salesAmt, double& commission, const double& basePay, double& pay){
    cout << fixed << setprecision(2);
    cout << "Monthly Sales: " << salesAmt << endl;
    cout << "Commission: " << commission << endl;
    cout << "Base Pay: " << basePay << endl;
    cout << "Total Pay: " << pay << endl;
} // end of displayPay

/* ================================== Output ===================================
Enter monthly sales amount: 60000
Monthly Sales: 60000.00
Commission: 1200.00
Base Pay: 2500.00
Total Pay: 3700.00
Press any key to close this window . . .
*/
