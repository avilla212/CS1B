// Attached: HW_6
// File: HW_6pdf
// =============================================================================
//
// Programmer: Alexander Villafana
// Class: CS1B
// Instructor: Med Mogasemi
//
// =============================================================================
// Program: Creating a Date Structure 
// =============================================================================
// Description:
// This program creates a Date structure and uses it to store the date. The user
// is prompted to enter the date in the format MM/DD/YYYY. The program then adds
// one day to the date and displays the new date.
// =============================================================================

#include <iostream>
#include <iomanip>

using namespace std;

// Date structure
struct Date {
    // data members
    int month;
    int day;
    int year;
};

// Function Prototypes
bool isDateValid(Date&);
void getDate(Date&);
void addOneDay(Date&);
void displayTomm(const Date&);

// ======== main ================================================================
//
// =============================================================================
int main(void){

    // repeat the program
    char repeat;

    do {
        // clear the screen
        system("cls");

        // get the date from the user
        Date date;
        getDate(date);
        displayTomm(date);
        
        // ask the user if they want to repeat the program
        cout << "\nDo it again? (Y/N) ";
        cin >> repeat;
    // repeat the program if the user enters 'y' or 'Y'
    } while (repeat == 'y' || repeat == 'Y');

    return 0;
}
// end of main  

// ======== isDateValid =========================================================
// This function checks if the date is valid
//
// Input: date - the date to check
//
// Output: true if the date is valid, false otherwise
// =============================================================================
bool isDateValid(Date& date){
    // check if the date is valid by checking if the month, day, and year are
    // within the valid range
    if (date.month  > 0 && date.month < 13
        && date.day > 0 && date.day  < 31
        && date.year > 2019){
            return true;
        }
    
    // if the date is invalid, display an error message
    cout << "Invalid date " << endl;
    return false;
}
// end isDateValid

// ======== getDate ============================================================
// This function gets the date from the user
// Input: date - the date to get
// Output: None
// =============================================================================
void getDate(Date& date){
    // get the date from the user
    do {
        // prompt the user to enter the date
        cout << "Enter todays date in the following order:" << endl;
        cout << "MM/DD/YYYY, (Month, Day, Year)." << endl;

        // get the month
        cout << "Month: ";
        cin >> date.month;

        // get the day
        cout << "Day: ";
        cin >> date.day;

        // get the year
        cout << "Year: ";
        cin >> date.year;
    // repeat the loop if the date is invalid
    } while (!isDateValid(date));   
}
// end of getDate

// ======== addOneDay ==========================================================
// This function adds one day to the date
//
// Input: date - the date to add one day to
//
// Output: None
// =============================================================================
void addOneDay(Date& date){
    // add one day to the date
    date.day++;
    
    // check if the day is the last day of the month
    if (date.day == 31){
        // set the day to 1
        date.month++;
        date.day = 1;

        // check if the month is the last month of the year
        if (date.month == 13){
            date.month = 1;
            date.year++;
        }
    }
}
// end of addOneDay

// ======== displayTomm ========================================================
// This function displays tomorrow's date
//
// Input: date - the date to display
//
// Output: None
// =============================================================================
void displayTomm(const Date& date){
    // display tomorrow's date
    Date tomorrow = date;
    
    // add one day to the date
    addOneDay(tomorrow);

    // display tomorrow's date
    cout << "\nAfter adding one day to today's date, tomorrow's date is ";
    
    // format the date
    cout.fill('0');
    // display the date
    cout << setw(2) << tomorrow.month << "/"
         << setw(2) << tomorrow.day   << "/"
         << tomorrow.year << "," << endl;
}
// end of displayTomm

//========================= OUTPUT =================================
// Enter todays date in the following order:
// MM/DD/YYYY, (Month, Day, Year).
// Month: 1
// Day: 20
// Year: 2020

// After adding one day to today's date, tomorrow's date is 01/21/2020,

// Do it again? (Y/N) y

// MM/DD/YYYY, (Month, Day, Year).
// Month: 1
// Day: 30
// Year: 2020

// After adding one day to today's date, tomorrow's date is 02/01/2020,

// Do it again? (Y/N) y

// MM/DD/YYYY, (Month, Day, Year).
// Month: 12
// Day: 30
// Year: 2020

// After adding one day to today's date, tomorrow's date is 01/01/2021,

// Do it again? (Y/N) y

// Enter todays date in the following order:
// MM/DD/YYYY, (Month, Day, Year).
// Month: 13
// Day: 10
// Year: 2020
// Invalid date 
// Enter todays date in the following order:
// MM/DD/YYYY, (Month, Day, Year).
// Month: 12
// Day: 12
// Year: 2020

// After adding one day to today's date, tomorrow's date is 12/13/2020,

// Do it again? (Y/N) n