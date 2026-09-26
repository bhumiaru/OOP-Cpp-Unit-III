#include <iostream>              // Includes input/output functionality
#include <string>                // Includes string functionality
using namespace std;             // Allows standard names without std::

class Payment {                  // Defines abstract Payment class
public:

    virtual void pay(double amount) const = 0;
                                   // Pure virtual payment function

    virtual ~Payment() = default; // Virtual destructor
};

class CardPayment : public Payment {
                                   // CardPayment inherits Payment
public:

    void pay(double amount) const override {
                                   // Implements pay function
        cout << "Paid Rs. " << amount << " using card\n";
                                   // Displays card payment
    }
};

class UpiPayment : public Payment {
                                   // UpiPayment inherits Payment
public:

    void pay(double amount) const override {
                                   // Implements pay function
        cout << "Paid Rs. " << amount << " using UPI\n";
                                   // Displays UPI payment
    }
};

class NetBankingPayment : public Payment {
                                   // NetBankingPayment inherits Payment
public:

    void pay(double amount) const override {
                                   // Implements pay function
        cout << "Paid Rs. " << amount << " using net banking\n";
                                   // Displays net banking payment
    }
};

class WalletPayment : public Payment {
                                   // New WalletPayment class
public:

    void pay(double amount) const override {
                                   // Implements pay function
        cout << "Paid Rs. " << amount << " using wallet\n";
                                   // Displays wallet payment
    }
};

void processPayment(const Payment& payment, double amount) {
                                   // Accepts Payment by reference
    payment.pay(amount);            // Calls appropriate payment function
}

int main() {                        // Program starts
    CardPayment card;               // Creates card object
    UpiPayment upi;                 // Creates UPI object
    NetBankingPayment netBanking;  // Creates net banking object
    WalletPayment wallet;           // Creates wallet object

    processPayment(card, 1250.0);   // Processes card payment
    processPayment(upi, 750
