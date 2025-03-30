// Include the header file invoices.h
#include "invoices.h"

int main(void){
    
    int count;

    cout << "Enter the number of invoices: ";
    cin >> count;

    for (int i = 0; i < count; i++){
        cout << "Enter invoice: " << i + 1 << endl;
        Invoices inv;
        inv.setIncvoice(&inv);
        inv.printInvoice(&inv);
    }

    // iterate through the invoices and print them


    return 0;
}