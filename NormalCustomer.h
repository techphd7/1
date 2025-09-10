#ifndef NORMALCUSTOMER_H
#define NORMALCUSTOMER_H

#include "Customer.h"

class NormalCustomer : public Customer {
public:
    NormalCustomer(string n, int u);
    double calculateBill() override;
};

#endif