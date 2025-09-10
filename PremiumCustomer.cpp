#include "PremiumCustomer.h"

PremiumCustomer::PremiumCustomer(string n, int u) : Customer(n, u) {}

double PremiumCustomer::calculateBill() {
    if (units < 0) {
        throw invalid_argument("Units cannot be negative!");
    }
    if (units <= 100)
        return units * 4;
    else
        return (100 * 4) + (units - 100) * 7;
}