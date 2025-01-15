#include "prototypes.h"

using namespace std;

int main(void){
    int id{};
    string name{};
    double gpa{};

    getRecord(id, name, gpa);
    displayRecord(id, name, gpa);

    return 0;
}

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
}

void displayRecord(int id, string name, double gpa){
    cout << "\nSTUDENT RECORD\n";
    cout << "ID: "    << id;
    cout << "\nNAME"  << name;
    cout << "\nGPA: " << gpa;
}