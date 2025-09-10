#include <iostream>
#include <stdexcept>
#include "NormalCustomer.h"
#include "PremiumCustomer.h"
using namespace std;

int main() {
    int choice;
    do {
        cout << "\n--- Electricity Bill Menu ---" << endl;
        cout << "1. Normal Customer" << endl;
        cout << "2. Premium Customer" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter choice: ";

        try {
            if (!(cin >> choice)) {
                throw invalid_argument("Invalid input! Please enter a number.");
            }

            if (choice == 1 || choice == 2) {
                cin.ignore(); // clear newline
                string name;
                int units;

                cout << "Enter Customer Name: ";
                getline(cin, name);

                cout << "Enter Units Consumed: ";
                if (!(cin >> units)) {
                    throw invalid_argument("Units must be a valid number!");
                }

                Customer* c;
                if (choice == 1)
                    c = new NormalCustomer(name, units);
                else
                    c = new PremiumCustomer(name, units);

                try {
                    // Nested try–catch for bill calculation
                    c->displayBill();
                }
                catch (const exception& e) {
                    cout << "Billing Error: " << e.what() << endl;
                }

                delete c;
            }
            else if (choice != 3) {
                cout << "Invalid choice! Try again." << endl;
            }
        }
        catch (const exception &e) {
            cout << "Input Error: " << e.what() << endl;
            cin.clear();
            cin.ignore(1000, '\n');
        }

    } while (choice != 3);

    cout << "Thank you!" << endl;
    return 0;
}
