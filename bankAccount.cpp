#include <iostream>
using namespace std;

void myMenu() {
private: int cc;
    cout << "*******MENU*******\n";
    cout << "1. Check Balance: \n";
    cout << "2. Deposit: \n";
    cout << "3. Withdraw: \n";
    cout << "4. Exit: \n";
    cout << "******************\n";

}

int main() {

    int option;
    double balance = 500;
    do {
        myMenu();
        cout << "Option: ";
        cin >> option;
        switch (option) {
        case 1:
            cout << "Balance is $" << balance << endl;
            break;
        case 2:
            cout << "Deposit amount: ";
            double depositamt;
            cin >> depositamt;
            break;
        case 3:
            cout << "Withdraw amount: ";
            double withdrawamt;
            cin >> withdrawamt;
            if (withdrawamt <= balance)
                balance -= withdrawamt;
            else
                cout << "Not enough money\n";
            break;
        }
    } while(option != 4);
    return 0;
}
