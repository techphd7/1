#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <string>
using namespace std;

class Customer {
protected:
    string name;
    int units;
public:
    Customer(string n, int u);
    virtual ~Customer();

    // Pure virtual = must be overridden
    virtual double calculateBill() = 0;

    // Virtual (can be overridden but not mandatory)
    virtual void displayBill();
};

#endif