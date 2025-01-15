#include <iostream>
#include <fstream>

using namespace std;

const int SIZE = 5;

void getNumbers(double[]);
void writeToFile(ofstream&, double[]);
void readFromFile(ifstream&, int);
void displayInReverse(double[]);

int main(void) {

	ifstream inFile;
	ofstream outFile;

	double number{};
	double numbers[SIZE];

	cout << "Enter 5 numbers: \n\n";

	getNumbers(numbers);
	writeToFile(outFile, numbers);
	readFromFile(inFile, number);

	return 0;
}

void getNumbers(double numbers[]) {
	for (int i = 0; i < SIZE; i++) {
		cout << "enter score #" << i + 1 << ": ";
		cin >> numbers[i];
	}
}


void writeToFile(ofstream& outFile, double numbers[]) {

	outFile.open("Score.txt");

	cout << "Writing the data into a file\n\n";

	for (int i = 0; i < SIZE; i++) {
		outFile << numbers[i] << endl;
	}

	outFile.close();
	cout << "Done! \n\n";
}
void readFromFile(ifstream& inFile, int number) {
	inFile.open("Score.txt");

	while (inFile >> number) {
		cout << "Number: " << number << "\n";
	}


	inFile.close();
}

void displayInReverse(double numbers[]) {
	for (int i = SIZE - 1; i >= 0; i--) {
		cout << numbers[i];
	}
}


