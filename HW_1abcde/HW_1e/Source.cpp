// read from login.txt
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void getLogin(string&, string&);
bool validateLogin(string, string);
void showResult(bool);

int main(void){
    string id{};
    string pw{};
    bool valid = false;

    getLogin(id, pw);
    valid = validateLogin(id, pw);
    showResult(valid);

    return 0;
}

void getLogin(string& id, string& pw){
    cout << "Enter your ID: ";
    getline(cin, id);

    cout << "Enter your Password: ";
    getline(cin, pw);

}

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
}

void showResult(bool valid){
    if (valid){
        cout << "Valid";
    } else {
        cout << "Invalid";
    }
}