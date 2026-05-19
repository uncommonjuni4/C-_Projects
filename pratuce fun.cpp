#include<iostream>
using namespace std;

// 1. FUNCTION WITHOUT PARAMETER (Welcome message)
void displayMessage();

// 2. FUNCTION WITH RETURN TYPE (Balance check)
int checkBalance(int balance);

// 3. FUNCTION WITH PARAMETER - CALL BY VALUE (Fake withdraw - original safe)
int withdrawByValue(int balance, int amount);

// 4. FUNCTION WITH PARAMETER - CALL BY REFERENCE (Real withdraw - original change)
void withdrawByReference(int &balance, int amount);

// 5. FUNCTION WITH PARAMETER (Deposit)
int deposit(int balance, int amount);

int main() {
    int originalBalance = 5000;  // Problem mein diya gaya fixed balance
    int choice, amount;
    
    // 1. WITHOUT PARAMETER function call
    displayMessage();
    
    // 2. RETURN TYPE example
    cout << "\nCurrent Balance: Rs. " << checkBalance(originalBalance) << endl;
    
    // 3. CALL BY VALUE demo
    cout << "\n===== CALL BY VALUE DEMO =====" << endl;
    cout << "Original balance before: Rs. " << originalBalance << endl;
    withdrawByValue(originalBalance, 1000);
    cout << "Original balance AFTER call by value: Rs. " << originalBalance << " (NO CHANGE!)" << endl;
    
    // 4. CALL BY REFERENCE demo (Real withdraw)
    cout << "\n===== CALL BY REFERENCE DEMO =====" << endl;
    cout << "Enter amount to withdraw (Real): ";
    cin >> amount;
    withdrawByReference(originalBalance, amount);
    cout << "Original balance AFTER withdraw: Rs. " << originalBalance << endl;
    
    // 5. Deposit
    cout << "\n===== DEPOSIT =====" << endl;
    cout << "Enter amount to deposit: ";
    cin >> amount;
    originalBalance = deposit(originalBalance, amount);
    cout << "Final balance: Rs. " << originalBalance << endl;
    
    return 0;
}

// 1. WITHOUT PARAMETER function definition
void displayMessage() {
    cout << "===== WELCOME TO JUNI ATM =====" << endl;
    cout << "Your Safe Banking Partner" << endl;
}

// 2. WITH RETURN TYPE function definition
int checkBalance(int balance) {
    return balance;
}

// 3. CALL BY VALUE function (Fake withdraw - copy change hoti hai)
int withdrawByValue(int balance, int amount) {
    if (amount <= balance) {
        balance = balance - amount;
        cout << "(Inside function) Withdrawn: Rs. " << amount << endl;
        cout << "(Inside function) New balance: Rs. " << balance << endl;
    } else {
        cout << "Insufficient balance!" << endl;
    }
    return balance;
}

// 4. CALL BY REFERENCE function (Real withdraw - original change hota hai)
void withdrawByReference(int &balance, int amount) {
    if (amount <= balance) {
        balance = balance - amount;
        cout << "Withdrawn successfully: Rs. " << amount << endl;
    } else {
        cout << "Insufficient balance! Cannot withdraw." << endl;
    }
}

// 5. DEPOSIT function (with parameter and return type)
int deposit(int balance, int amount) {
    balance = balance + amount;
    cout << "Deposited: Rs. " << amount << endl;
    return balance;
}
