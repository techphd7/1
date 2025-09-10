#include "Customer.h"
#include <iostream>
using namespace std;

Customer::Customer(string n, int u) : name(n), units(u) {}

Customer::~Customer() {}

void Customer::displayBill() {
    cout << "Customer: " << name << endl;
    cout << "Units Consumed: " << units << endl;
    cout << "Total Bill: Rs. " << calculateBill() << endl;
}