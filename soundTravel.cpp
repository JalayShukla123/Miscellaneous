#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    unsigned int menu;
    double seconds;
    double distance;
    double carbonDioxide = 258;
    double air = 331.5;
    double helium = 972;
    double hydrogen = 1270;


    cout << "Select the medium that sound is traveling through:" << endl;
    cout << "1 Carbon Dioxide" << endl;
    cout << "2 Air" << endl;
    cout << "3 Helium" << endl;
    cout << "4 Hydrogen" << endl;
    cin >> menu;

    if(menu >= 1 && menu <= 4) {
        cout << "Enter time (in seconds)" << endl;
        cin >> seconds;

        if(seconds < 0 || seconds > 30) {
            cout << "The time must be between 0.000 and 30.000 (inclusive)" << endl;
        }
        else {
            cout << fixed << setprecision(3);

            if(menu == 1) {
                distance = seconds * carbonDioxide;
                cout << "Carbon Dioxide: " << seconds << " seconds" << endl;
            }
            else if(menu == 2) {
                distance = seconds * air;
                cout << "Air: " << seconds << " seconds" << endl;
            }
            else if(menu == 3) {
                distance = helium * seconds;
                cout << "Helium: " << seconds << " seconds" << endl;
            }
            else {
                distance = seconds * hydrogen;
                cout << "Hydrogen: " << seconds << " seconds" << endl;
            }
            cout << fixed << setprecision(4);
            cout << "Traveled " << distance << " meters" << endl;
        }
    }
    else {
        cout << "The menu value is invalid. Please run the program again." << endl;
    }

    return 0;
}