#include <iostream>
#include <iomanip>

using namespace std;

double getSalesAmt(double& );
double calcCommission(double& );
double calcPay(double&);
void displayPay(double& salesAmt, double& commission, const double& basePay, double& pay);

int main(void){
    
    double salesAmt = 0.0;
    double commission = 0.0;
    double pay = 0.0;
    const double BASE_PAY = 2500.00;

    getSalesAmt(salesAmt);
    commission = calcCommission(salesAmt);
    pay = calcPay(commission);
    displayPay(salesAmt, commission, BASE_PAY, pay);
    
}


/*
* Function: getSalesAmt
* @param: salesAmt
* @return: salesAmt
*/
double getSalesAmt(double& salesAmt){
    cout << "Enter monthly sales amount: ";
    cin >> salesAmt;

    return salesAmt;
}

double calcCommission(double& salesAmt){
    double commission = 0.0;
    
    // Commission is 2% of the sales amount
    if (salesAmt > 50000){
        commission = salesAmt * 0.02;
    // Commission is 1.5% of the sales amount 
    } else if (salesAmt > 25000){
        commission = salesAmt * 0.015;
    } 

    // Commission is None
    return commission;
}

double calcPay(double& commission){
    const double BASE_PAY = 2500.00;
    double pay = 0.0;

    pay = BASE_PAY + commission;

    return pay;
}

void displayPay(double& salesAmt, double& commission, const double& basePay, double& pay){
    cout << fixed << setprecision(2);
    cout << "Monthly Sales: " << salesAmt << endl;
    cout << "Commission: " << commission << endl;
    cout << "Base Pay: " << basePay << endl;
    cout << "Total Pay: " << pay << endl;
}