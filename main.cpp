// This program counts the number of words in files selected by the user and gives the average.
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main ( )
{
    ifstream inputfile;
    string filename;
    string words;
    int counter = 0;

    //Get the filename from the user.
    cout << "Enter the filename: ";
    cin >> filename;

    //Open the input file.
    inputfile.open(filename.c_str());

    //If the file succesfully opened, process it.
    if (inputfile)
    {
        while (inputfile >> words)
            counter++;
        inputfile.close();
        inputfile.open(filename);
        string line; //the actual line of text in the file
        int lineNumber = 0; //the line number in the file the program is currently reading.
        while(getline(inputfile, line)) { //while the program reads in each line from the inputFile, lineNumber increases by 1 each time.
            lineNumber++;
        }
        cout << counter/lineNumber << endl;
        inputfile.close();

    }
    else
    {
        //Display an error message.
        cout << "Error opening the file.\n";
    }

    return 0;
}
