#ifndef INVOICES_H
#define INVOICES_H

#include <string>
#include <iostream>

using namespace std;

struct Invoices {
    int invoiceNumber;
    double amt;
    char paid;

    Invoices() {
        invoiceNumber = 0;
        amt = 0.0;
        paid = 'N';
    }

    Invoices(int invoiceNumber, double amt, char paid) {
        this->invoiceNumber = invoiceNumber;
        this->amt = amt;
        this->paid = paid;
    }

    void setIncvoice(Invoices& inv){
        cout << "Enter invoice number: ";
        cin >> inv->invoiceNumber;

        cout << "Enter invoice amount: ";
        cin >> inv->amt;

        cout << "Is the invoice paid? (Y/N): ";
        cin >> inv->paid;

        cout << endl;

    }

    void printInvoice(Invoices& inv){
        cout << "Invoice Number: " << inv->invoiceNumber << endl;
        cout << "Amount: " << inv->amt << endl;
        cout << "Paid: " << inv->paid << endl;
    }

    // Destructor
    ~Invoices() {
        cout << "Invoice " << invoiceNumber << " is being destroyed." << endl;
    }


};




#ifndef INVOICES_H