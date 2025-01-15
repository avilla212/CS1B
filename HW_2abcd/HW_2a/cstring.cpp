#include <iostream>
#include <string>
#include <cstring>

using namespace std;

// newLine function using ostream
ostream& newLine(ostream& COUT){
    return COUT << endl;
}

int main(void){

    // Three ways to to put value into a cstring

    // Declare a c-string with a value 
    char name1[8] = "Tom Lee";

    for (int i = 0; i < 8; i++){
        cout << name1[i];
    }

    cout << newLine;

    char name2[8] = {'T', 'o', 'm', ' ', 'L', 'e', 'e', '\0'}; 

    for (int i = 0; i < 8; i++){
        cout << name2[i];
    }

    cout << newLine;

    // Use strcpy to copy a c-string
    char name3[8];
    strcpy(name3, "Tom Lee");

    cout << "name3: " << name3 << endl;

    // Use cin.getline to get a c-string
    char name4[8];
    cout << "Enter your name: ";
    cin.getline(name4, 8);

    cout << "name4: " << name4 << endl;
    



    return 0;
}