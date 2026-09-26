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
                                   // Implements payment function
        cout << "Paid Rs. " << amount << " using card\n";
                                   // Displays card payment
    }
};

class UpiPayment : public Payment {
                                   // UpiPayment inherits Payment
public:

    void pay(double amount) const override {
                                   // Implements payment function
        cout << "Paid Rs. " << amount << " using UPI\n";
                                   // Displays UPI payment
    }
};

class NetBankingPayment : public Payment {
                                   // NetBankingPayment inherits Payment
public:

    void pay(double amount) const override {
                                   // Implements payment function
        cout << "Paid Rs. " << amount << " using net banking\n";
                                   // Displays net banking payment
    }
};

void processPayment(const Payment& payment, double amount) {
                                   // Accepts Payment using base reference
    payment.pay(amount);            // Calls correct derived payment function
}

int main() {                        // Program starts
    CardPayment card;               // Creates card payment object
    UpiPayment upi;                 // Creates UPI payment object
    NetBankingPayment netBanking;  // Creates net banking object

    processPayment(card, 1250.0);   // Processes card payment
    processPayment(upi, 750.0);     // Processes UPI payment
    processPayment(netBanking, 500.0);
                                   // Processes net banking payment

    return 0;                       // Ends program
}
