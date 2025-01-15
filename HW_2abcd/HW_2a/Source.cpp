// c-strings - collection of characters stored in the form of array
#include <iostream>
#include <string>
#include <cstring>

using namespace std;

// Declare null terminated c-strings for first name, last name and full name
char firstName[10] = "John";
char lastName[10];
char fullName[20];

// Display information
void displayInfo(char* fullName, int age){
    cout << "Full name: " << fullName << endl;
    cout << "Age: " << age << endl;
}


int main(void){
    int age {};

    cout << "Enter age: ";
    cin >> age;
    cin.ignore();

    cout << "Enter last name: ";
    cin.getline(lastName, 10);

    // Assign firstName and lastName to fullName
    strcpy(fullName, firstName);
    strcat(fullName, " ");
    strcat(fullName, lastName);

    displayInfo(fullName, age);

    return 0;
}
