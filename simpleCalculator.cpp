#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    cout << "Enter first number.\n";
    cin >> num1;
    cout << "Enter second number.\n";
    cin >> num2;
    int option;
    int counter = 0;
    cout << " 1. Addition\n 2. Subtraction\n 3. Multiplication\n 4. Division\n 5. Multiplication with Negative Numbers\n ";
    cin >> option;
    switch(option) {
        case 1: {
            while (num1 > 0) { //num1 is positive
                counter++;
                num1--;
            }
            while (num2 > 0) { //num2 is positive
                counter++;
                num2--;
            }
            while (num1 < 0) { // num1 in negative
                counter--;
                num1++;
            }
            while (num2 < 0) { // num2 in negative
                counter--;
                num2++;
            }
            cout << counter;
            break;
        }
        case 2: {
            while (num1 > 0) { //num1 is positive
                counter++;
                num1--;
            }
            while (num2 > 0) { //num2 is positive
                counter--;
                num2--;
            }
            while (num1 < 0) { // num1 in negative
                counter--;
                num1++;
            }
            while (num2 < 0) { // num2 in negative
                counter++;
                num2++;
            }
            cout << counter;
            break;
        }
        case 3: {
            double num1count = num1;
            double nbr2 = num2;

            while (nbr2 > 0) {
                nbr2--;
                num1 = num1count; //needs to be done to reset the value of num1 after the next while loop.
                while (num1 > 0) {
                    counter++;
                    num1--;
                }
            }
            while (nbr2 < 0) {
                nbr2++;
                num1 = num1count; //needs to be done to reset the value of num1 after the next while loop.
                while (num1 > 0) {
                    counter--;
                    num1--;
                }
            }
            while (nbr2 > 0) {
                nbr2--;
                num1 = num1count; //needs to be done to reset the value of num1 after the next while loop.
                while (num1 < 0) {
                    counter--;
                    num1++;
                }
            }
            cout << counter;
            break;
        }
        case 4: {
            double nbr2 = num2;
            while (num1 > 0) {
                num2 = nbr2;
                while (num2 > 0) {
                    num1--;
                    num2--;
                }
                counter++;
            }
            cout << counter;
            break;
                }
        case 5: {
            double num1count = num1;
            double nbr2 = num2;
            while (nbr2 > 0) {
                nbr2--;
                num1 = num1count; //needs to be done to reset the value of num1 after the next while loop.
                while (num1 < 0) {
                    counter--;
                    num1++;
                }
            }
            while (nbr2 < 0) { //when first user inputted number is positive but second is negative
                nbr2++;
                num1 = num1count; //needs to be done to reset the value of num1 after the next while loop.
                while (num1 > 0) {
                    counter--;
                    num1--;
                }
            }
            cout << counter;
            break;
        }

    }
    return 0;
}
