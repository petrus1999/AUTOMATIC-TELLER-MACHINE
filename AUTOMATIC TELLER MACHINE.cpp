// AUTOMATIC TELLER MACHINE.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
using namespace std;
void ShowMenu() {
    cout << ".....WELCOME TO PETRUS SHAI ATM....." << endl;
    cout << "1:Check balance" << endl;
    cout << "2:Deposit" << endl;
    cout << "3:Withdrawal" << endl;
    cout << "4:Exit" << endl;
}

int main() {
    int balance = 100000;
    double  depositamount, withdrawalamount;
    int option;
    do {
        ShowMenu();
        cout << "option:" << endl;
        cin >> option;

        switch (option) {
        case 1:
            cout << "Balance is :R" << balance<< endl;
            break;
        case 2:
            cout << " Deposit amount ";
            cin >> depositamount;
            balance += depositamount;
            break;
        case 3:
            cout << " withdrawal ";
            cin >> withdrawalamount;
            if (withdrawalamount <= balance) {
                balance -= withdrawalamount;
            }
            else {
                cout << " Insufficient funds" << endl;
            }

            break;
        case 4:
            cout << "Exit" << endl;
            break;

        }
    } while (option != 4);
    return 0;


}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
