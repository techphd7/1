#ifndef PREMIUMCUSTOMER_H
#define PREMIUMCUSTOMER_H

#include "Customer.h"

class PremiumCustomer : public Customer {
public:
    PremiumCustomer(string n, int u);
    double calculateBill() override;
};

#endif