#include <iostream>

using namespace std;

void getDimensions(int&, int&, int&);
bool areValid(int, int, int);
int calcVolume(int, int, int);
void displayVolume(int, int, int, int);

int main(void){

    int width, length, depth;
    getDimensions(width, length, depth);

    int volume = calcVolume(width, length, depth);
    displayVolume(width, length, depth, volume);

    return 0;
}

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
        }

    } catch (exception& e){
        cout << "Error: " << e.what();
    }
}

bool areValid(int width, int length, int depth){

    return (width > 5 && width < 20) &&
           (length > 5 && length < 100) &&
           (depth > 1 && depth < 12);
}

int calcVolume(int width, int length, int depth){

    int volume = width * length * depth;

    return volume;
}

void displayVolume(int width, int length, int depth, int volume){
    cout << "\nWidth: " << width;
    cout << "\nLength: " << length;
    cout << "\nDepth: " << depth;

    cout << "\n\nThe Volume is " << volume << " cubic feet";
}