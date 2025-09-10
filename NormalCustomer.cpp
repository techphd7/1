#include "NormalCustomer.h"

NormalCustomer::NormalCustomer(string n, int u) : Customer(n, u) {}

double NormalCustomer::calculateBill() {
    if (units < 0) {
        throw invalid_argument("Units cannot be negative!");
    }
    if (units <= 100)
        return units * 5;
    else
        return (100 * 5) + (units - 100) * 8;
}