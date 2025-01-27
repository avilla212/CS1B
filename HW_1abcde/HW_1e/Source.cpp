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

// Attached: HW_1A(a,d)
// File: HW_1A.pdf
// =============================================================================
//
// Programmer: Moe Mogasemi
// Class: CS1B
// Instructor: Med Mogasemi
//
// =============================================================================
// Program: Student Record Management
// =============================================================================
// Description:
// This program allows users to input a student record including ID, name, and
// GPA. It validates the input and displays the record to the user.
// =============================================================================

#include "prototypes.h"

using namespace std;

// ---- main ------------------------------------------------------------------
// This is the main function where the program starts. It retrieves a student
// record from the user and displays it.
// ----------------------------------------------------------------------------
int main(void){
    
    // Declaring variables
    int id{};
    string name{};
    double gpa{};

    // Get the student record
    getRecord(id, name, gpa);

    // Display the student record
    displayRecord(id, name, gpa);

    return 0;
} // end of main

// ==== getRecord =============================================================
// This function prompts the user to input a student record including ID, name,
// and GPA. It performs basic validation and stores the data in the provided
// reference variables.
// 
// Input:
// id - Reference variable to store the student ID.
// name - Reference variable to store the student name.
// gpa - Reference variable to store the student GPA.
// 
// Output:
// Stores the user input in the reference variables.
// =============================================================================
void getRecord(int& id, string& name, double& gpa){
    try {
        cout << "Enter a student record:\n";

        cout << "ID: ";
        cin >> id;
        cin.ignore();

        cout << "NAME: ";
        getline(cin, name);

        cout << "GPA: ";
        cin >> gpa;
    } catch (exception& e){
        cout << "Error: " << e.what() << endl;
    }
} // end of getRecord

// ==== displayRecord =========================================================
// This function displays the student record, including ID, name, and GPA, in
// a formatted output.
// 
// Input:
// id - The student ID.
// name - The student name.
// gpa - The student GPA.
// 
// Output:
// Prints the student record to the console.
// =============================================================================
void displayRecord(int id, string name, double gpa){
    cout << "\nSTUDENT RECORD\n";
    cout << "ID: "    << id;
    cout << "\nNAME: "  << name;
    cout << "\nGPA: " << gpa;
} // end of displayRecord

/* ================================== Output ===================================
Enter a student record:
ID: 12345
NAME: John Doe
GPA: 3.75

STUDENT RECORD
ID: 12345
NAME: John Doe
GPA: 3.75
Press any key to close this window . . .
*/

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

// =============================================================================
// Program: Login Validation
// =============================================================================
// Description:
// This program validates a user login by comparing the entered ID and password
// with the credentials stored in a file (login.txt). It informs the user
// whether the login is valid or invalid.
// =============================================================================

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// Function prototypes
void getLogin(string&, string&);
bool validateLogin(string, string);
void showResult(bool);

// ---- main ------------------------------------------------------------------
// This is the main function where the program starts. It prompts the user to
// enter their login credentials, validates them, and displays the result.
// ----------------------------------------------------------------------------
int main(void){
    
    // Declaring variables
    string id{};
    string pw{};
    bool valid = false;

    // Get the login credentials from the user
    getLogin(id, pw);

    // Validate the credentials against the file
    valid = validateLogin(id, pw);

    // Display the result of the validation
    showResult(valid);

    return 0;
} // end of main

// ==== getLogin ==============================================================
// This function prompts the user to input their login credentials (ID and
// password).
// 
// Input:
// id - Reference variable to store the entered ID.
// pw - Reference variable to store the entered password.
// 
// Output:
// Stores the user input in the reference variables.
// =============================================================================
void getLogin(string& id, string& pw){
    cout << "Enter your ID: ";
    getline(cin, id);

    cout << "Enter your Password: ";
    getline(cin, pw);
} // end of getLogin

// ==== validateLogin =========================================================
// This function validates the entered ID and password by comparing them with
// the credentials stored in the file (login.txt).
// 
// Input:
// id - The entered ID.
// pw - The entered password.
// 
// Output:
// Returns true if the credentials match; otherwise, false.
// =============================================================================
bool validateLogin(string id, string pw){
    string idFromFile{};
    string pwFromFile{};
    bool valid = false;

    // ifstream will read from a file
    ifstream inFile("login.txt");
    try {

        if (inFile.is_open()){
            // Read from file
            inFile >> idFromFile >> pwFromFile;

            // Check if the id and pw are the same as the ones in the file
            if (id == idFromFile && pw == pwFromFile){
                valid = true;
            }

        } else {
            throw runtime_error("File not found");
        }
    } catch (exception& e){
        cout << "Error: " << e.what();
    }

    // Close the file
    inFile.close();

    return valid;
} // end of validateLogin

// ==== showResult ============================================================
// This function displays the result of the login validation.
// 
// Input:
// valid - A boolean indicating whether the login is valid or invalid.
// 
// Output:
// Prints "Valid" if the login is successful; otherwise, "Invalid".
// =============================================================================
void showResult(bool valid){
    if (valid){
        cout << "Valid";
    } else {
        cout << "Invalid";
    }
} // end of showResult

/* ================================== Output ===================================
Enter your ID: admin
Enter your Password: 1234
Valid

Press any key to close this window . . .
*/
