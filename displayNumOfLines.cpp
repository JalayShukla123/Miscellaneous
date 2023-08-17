#include <iostream>
#include <fstream>
using namespace std;
int main() {
    string fileName;
    string line;
    int lineNumber = 0;
    int counter = 0;
    int numOfLines = 0;
    cout << "Enter the file name: ";
    getline(cin, fileName);
    ifstream inputFile(fileName);
    cout << "How many lines do you want printed at a time? ";
    cin >> numOfLines;

    while (getline(inputFile,line)) {//the if loop should be in the while loop because the while loop won't stop without a break statement.
        if (counter < numOfLines) {
            lineNumber++;
            counter++;
            cout << lineNumber << ". " << line << endl;
        }
        else {
            cout << "Would you like to print the next " << numOfLines << " lines? (1 for yes and anything else for no)\n";
            int ans = 0;
            cin >> ans;
            if (ans == 1) {
                counter = 0;
            }
            else {
                cout << "The file has been closed.\n";
                inputFile.close();
                return 0;
            }
        }
    }
        return 0;
}
