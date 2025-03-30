// Attached: HW_6(a,c)
// File: HW_6(a,c).pdf
// =============================================================================
//
// Programmer: Alexander Villafana
// Class: CS1B
// Instructor: Med Mogasemi
//
// =============================================================================
// Program: Read and write to a text file and append data to existing file (6a,c)
// =============================================================================
// Description:
// This program reads a text file and outputs the contents to the console. It then
// appends user input to the file results.txt
// =============================================================================

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// Function Prototypes
void readTextFile(string fileName);
void appendUserInput(string fileName);

// ======== main ================================================================
//
// =============================================================================
int main(void){
    
    readTextFile("data.txt");

    // append user input to results.txt
    cout << "Enter 3 more numbers: ";
    appendUserInput("results.txt");

    return 0;
}

// ======== readTextFile =======================================================
// This function reads a text file and outputs the contents to the console
//
// Input: fileName - the name of the file to read
// 
// Output: None
// =============================================================================
void readTextFile(string fileName){
    try {
        ifstream inFile;
        ofstream outFile;

        inFile.open(fileName);
        outFile.open("results.txt");

        if (inFile.fail()) {
            cout << "Error opening input file" << endl;
            return;
        }

        if (outFile.fail()){
            cout << "Error opening output file" << endl;
            return;
        }

        cout << "Here are the numbers in the file: " << endl;

        // read the file until eof and write the data to results.txt
        while (!inFile.eof()){
            string line;
            getline(inFile, line);
            cout << line << endl; // output to console
            outFile << line << endl; // write to results.txt
        }

        // close the files
        inFile.close();
        outFile.close();
    } catch (exception e) {
        cout << "Error opening file" << endl;
    }
}
// end of readTextFile

// ======== writeTextFile ======================================================
// This function writes the user input to a text file
//
// Input: fileName - the name of the file to write to
//
// Output: None
// =============================================================================
void appendUserInput(string fileName){
    try {
        fstream outFile;
        outFile.open(fileName, ios::app);

        if (outFile.fail()){
            cout << "Error opening output file" << endl;
            return;
        }

        string input;
        for (int i = 0; i < 3; i++){
            cin >> input;
            outFile << input << endl;
        }

        outFile.close();

        cout << "The numbers have been written (appended) to results.txt" << endl;
        
    } catch (exception e) {
        cout << "Error opening file" << endl;
    }
}
// end of writeTextFile


// ==== Output =================================================================

// Here are the numbers in the file: 
// 3
// 4
// 5
// Enter 3 more numbers: 6
// 7
// 8
// Press any key to continue . . .
// =============================================================================