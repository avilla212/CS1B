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
