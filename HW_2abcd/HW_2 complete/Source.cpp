// Attached: HW_2B(a,d)
// File: HW_2B.pdf
// ==============================================================================
//
// Programmer: Alexander Villafana
// Class: CS1B
// Instructor: Med Mogasemi
//
// ==============================================================================
// Display information about a person (HW_2a)
// ==============================================================================
// Description:
// This program will display information about a person using c-strings
// ==============================================================================

#include <iostream>
#include <string>
#include <cstring>

using namespace std;



// Function prototypes
void displayInfo(char* fullName, int age);

// === main =====================================================================
//
// ==============================================================================
int main(void){
    // Declare variables
    int age {};
    char firstName[10] = "John";
    char lastName[10];
    char fullName[20];

    // Get user input
    cout << "Enter age: ";
    cin >> age;
    cin.ignore();

    // Get last name
    cout << "Enter last name: ";
    cin.getline(lastName, 10);

    // Assign firstName and lastName to fullName
    strcpy(fullName, firstName);
    strcat(fullName, " ");
    strcat(fullName, lastName);

    // Display information
    displayInfo(fullName, age);

    return 0;
} // end of main

// === displayInfo ============================================================
// This function will display information about a person
//
// Input: char* fullName - the full name of the person
//        int age - the age of the person
// Output: None
// =============================================================================
void displayInfo(char* fullName, int age){
    cout << "Full name: " << fullName << endl;
    cout << "Age: " << age << endl;
}

// === OUTPUT ===================================================================
// Enter age: 25
// Enter last name: Doe
// Full name: John Doe
// Age: 25
// ==============================================================================









// Attached: HW_2b(a,e)
// File: HW_2b.pdf
// =============================================================================
//
// Programmer: Alexander Villafana
// Class: CS1B
// Instructor: Med Mogasemi
//
// =============================================================================
// Program: ID Number Search (HW_2b)
// =============================================================================
// Description:
// This program declares and initializes an array of ID numbers. It prompts the
// user to enter an ID number to search for in the array. If the ID is found,
// the program displays the index of the ID. Otherwise, it informs the user
// that the ID is not in the list.
// =============================================================================

#include <iostream>
using namespace std;

// Function prototypes
void initializeArray(int[], const int);
int searchID(const int[], const int, int);
void displayResult(int, int);

// ---- main ------------------------------------------------------------------
// This is the main function where the program starts. It initializes the array
// of ID numbers, prompts the user for input, searches for the input in the
// array, and displays the results.
// ----------------------------------------------------------------------------
int main(void) {
    // Declaring constants and variables
    const int SIZE = 5;
    int idNumbers[SIZE];
    int searchIDValue = 0;
    int index = -1;

    // Initialize the array with predefined ID numbers
    initializeArray(idNumbers, SIZE);

    // Prompt user to enter an ID number to search
    cout << "Enter an ID number to search: ";
    cin >> searchIDValue;

    // Search the array for the ID number
    index = searchID(idNumbers, SIZE, searchIDValue);

    // Display the result of the search
    displayResult(index, searchIDValue);

    return 0;
} // end of main

// ==== initializeArray =======================================================
// This function initializes an array of ID numbers with predefined values.
// 
// Input:
// idNumbers - The array to initialize.
// SIZE - The size of the array.
// 
// Output:
// Initializes the array with predefined ID numbers.
// =============================================================================
void initializeArray(int idNumbers[], const int SIZE) {
    idNumbers[0] = 12345;
    idNumbers[1] = 54321;
    idNumbers[2] = 11223;
    idNumbers[3] = 33211;
    idNumbers[4] = 44411;
} // end of initializeArray

// ==== searchID ==============================================================
// This function searches the array for a given ID number. If the ID is found,
// it returns the index of the ID. If not, it returns -1.
// 
// Input:
// idNumbers - The array of ID numbers.
// SIZE - The size of the array.
// searchIDValue - The ID number to search for.
// 
// Output:
// Returns the index of the ID if found, or -1 if not found.
// =============================================================================
int searchID(const int idNumbers[], const int SIZE, int searchIDValue) {
    for (int i = 0; i < SIZE; i++) {
        if (idNumbers[i] == searchIDValue) {
            return i; // Return the index if found
        }
    }
    return -1; // Return -1 if not found
} // end of searchID

// ==== displayResult =========================================================
// This function displays the result of the search. If the index is valid, it
// shows the index where the ID was found. If not, it informs the user that the
// ID is not in the list.
// 
// Input:
// index - The index of the ID (or -1 if not found).
// searchIDValue - The ID number the user searched for.
// 
// Output:
// Displays whether the ID was found and, if so, its index.
// =============================================================================
void displayResult(int index, int searchIDValue) {
    if (index != -1) {
        cout << "ID number " << searchIDValue << " is found at index " << index << "." << endl;
    } else {
        cout << "ID number " << searchIDValue << " is not in the list." << endl;
    }
} // end of displayResult

/* ================================== Output ===================================
Example 1:
Enter an ID number to search: 54321
ID number 54321 is found at index 1.

Example 2:
Enter an ID number to search: 55555
ID number 55555 is not in the list.
============================================================================= */









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









// Attached: HW_2b(a,e)
// File: HW_2b.pdf
// =============================================================================
//
// Programmer: Alexander Villafana
// Class: CS1B
// Instructor: Med Mogasemi
//
// =============================================================================
// Program: Studen Grades (HW_2d)
// =============================================================================
// Description:
// This program will read from a text file and assigns the values to a 2D array
// =============================================================================

#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;

// Function prototypes
bool readGradesFromFile(const string& filename, char grades[5][3], int rows, int cols);
void displayAllGrades(const char grades[5][3], int rows, int cols);
void calculateStudentGPAs(const char grades[5][3], int rows, int cols, double studentGPAs[]);
void displayStudentGPAs(const double studentGPAs[], int rows);
void calculateSubjectAverages(const char grades[5][3], int rows, int cols, double subjectAverages[]);
void displaySubjectAverages(const double subjectAverages[], int cols);

// ---- main ------------------------------------------------------------------
// This is the main function where the program starts. It reads grades from a
// file, calculates GPAs for students, and computes average GPAs for each subject.
// ----------------------------------------------------------------------------
int main() {
    const int ROWS = 5; // Number of students
    const int COLS = 3; // Number of subjects (English, History, Math)
    char grades[ROWS][COLS];
    double studentGPAs[ROWS] = {0.0};
    double subjectAverages[COLS] = {0.0};

    // Attempt to read grades from file
    if (!readGradesFromFile("grades.txt", grades, ROWS, COLS)) {
        cerr << "Error: Unable to open grades.txt file." << endl;
        return 1;
    }

    // Display all grades
    cout << "\nAll Grades" << endl;
    displayAllGrades(grades, ROWS, COLS);

    // Calculate and display student GPAs
    calculateStudentGPAs(grades, ROWS, COLS, studentGPAs);
    cout << "\nStudent GPAs" << endl;
    displayStudentGPAs(studentGPAs, ROWS);

    // Calculate and display average GPA by subject
    calculateSubjectAverages(grades, ROWS, COLS, subjectAverages);
    cout << "\nAverage GPA by Subject" << endl;
    displaySubjectAverages(subjectAverages, COLS);

    return 0;
}

// ==== readGradesFromFile ====================================================
// This function reads grades from the file and assigns them to a 2D array.
// 
// Input:
// filename - The name of the file to read.
// grades - The 2D array to populate.
// rows, cols - Dimensions of the array.
// 
// Output:
// Returns true if the file is read successfully, false otherwise.
// =============================================================================
bool readGradesFromFile(const string& filename, char grades[5][3], int rows, int cols) {
    ifstream inFile(filename);
    if (!inFile) {
        return false;
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            inFile >> grades[i][j];
        }
    }

    inFile.close();
    return true;
}

// ==== displayAllGrades ======================================================
// This function displays all grades in a formatted table.
// 
// Input:
// grades - The 2D array of grades.
// rows, cols - Dimensions of the array.
// 
// Output:
// Displays the grades in a tabular format.
// =============================================================================
void displayAllGrades(const char grades[5][3], int rows, int cols) {
    cout << setw(10) << "Student" << setw(10) << "English" << setw(10) << "History" << setw(10) << "Math" << endl;
    for (int i = 0; i < rows; i++) {
        cout << setw(10) << "#" << i + 1;
        for (int j = 0; j < cols; j++) {
            cout << setw(10) << grades[i][j];
        }
        cout << endl;
    }
}

// ==== calculateStudentGPAs ==================================================
// This function calculates the GPA for each student.
// 
// Input:
// grades - The 2D array of grades.
// rows, cols - Dimensions of the array.
// 
// Output:
// Populates the studentGPAs array with GPA values.
// =============================================================================
void calculateStudentGPAs(const char grades[5][3], int rows, int cols, double studentGPAs[]) {
    for (int i = 0; i < rows; i++) {
        int totalPoints = 0;
        for (int j = 0; j < cols; j++) {
            switch (grades[i][j]) {
                case 'A': totalPoints += 4; break;
                case 'B': totalPoints += 3; break;
                case 'C': totalPoints += 2; break;
                case 'D': totalPoints += 1; break;
                case 'F': totalPoints += 0; break;
            }
        }
        studentGPAs[i] = static_cast<double>(totalPoints) / cols;
    }
}

// ==== displayStudentGPAs ====================================================
// This function displays the GPA of each student.
// 
// Input:
// studentGPAs - The array of student GPA values.
// rows - The number of students.
// 
// Output:
// Displays the GPAs of each student.
// =============================================================================
void displayStudentGPAs(const double studentGPAs[], int rows) {
    cout << setw(10) << "Student" << setw(10) << "GPA" << endl;
    for (int i = 0; i < rows; i++) {
        cout << setw(10) << "#" << i + 1 << setw(10) << fixed << setprecision(2) << studentGPAs[i] << endl;
    }
}

// ==== calculateSubjectAverages ==============================================
// This function calculates the average GPA for each subject.
// 
// Input:
// grades - The 2D array of grades.
// rows, cols - Dimensions of the array.
// 
// Output:
// Populates the subjectAverages array with average GPA values.
// =============================================================================
void calculateSubjectAverages(const char grades[5][3], int rows, int cols, double subjectAverages[]) {
    for (int j = 0; j < cols; j++) {
        int totalPoints = 0;
        for (int i = 0; i < rows; i++) {
            switch (grades[i][j]) {
                case 'A': totalPoints += 4; break;
                case 'B': totalPoints += 3; break;
                case 'C': totalPoints += 2; break;
                case 'D': totalPoints += 1; break;
                case 'F': totalPoints += 0; break;
            }
        }
        subjectAverages[j] = static_cast<double>(totalPoints) / rows;
    }
}

// ==== displaySubjectAverages ================================================
// This function displays the average GPA for each subject.
// 
// Input:
// subjectAverages - The array of average GPA values for each subject.
// cols - The number of subjects.
// 
// Output:
// Displays the average GPA of each subject.
// =============================================================================
void displaySubjectAverages(const double subjectAverages[], int cols) {
    cout << setw(10) << "English" << setw(10) << "History" << setw(10) << "Math" << endl;
    for (int j = 0; j < cols; j++) {
        cout << setw(10) << fixed << setprecision(2) << subjectAverages[j];
    }
    cout << endl;
}

/* ================================== Output ===================================
All Grades
   Student   English   History      Math
        #1         A         A         B
        #2         C         C         F
        #3         C         D         B
        #4         B         A         C
        #5         B         A         B

Student GPAs
   Student       GPA
        #1      3.67
        #2      1.33
        #3      2.00
        #4      3.00
        #5      3.33

Average GPA by Subject
   English   History      Math
      2.80      2.80      2.20
============================================================================= */

