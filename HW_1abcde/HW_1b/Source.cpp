#include <iostream>
#include <iomanip>

using namespace std;

void getTemps(double&, double&, double&);
double calcAvg(double, double, double);
void displayAvg(double);

int main(void){
    double temp1, temp2, temp3;
    getTemps(temp1, temp2, temp3);

    double tempAvg = calcAvg(temp1, temp2, temp3);
    displayAvg(tempAvg);

    return 0;
}

void getTemps(double& temp1, double& temp2, double& temp3){
    cout << "Enter the temperatures of 3 cities: \n";
    
    cout << "#1: ";
    cin >> temp1;

    cout << "#2: ";
    cin >> temp2;

    cout << "#3: ";
    cin >> temp3;
}

double calcAvg(double temp1, double temp2, double temp3){
    double tempSum = temp1 + temp2 + temp3;
    double tempAvg = tempSum / 3.0;

    return tempAvg;
}

void displayAvg(double tempAvg){
    cout << fixed << setprecision(1);
    cout << "\nThe average temperature is " << tempAvg << " degrees";
}