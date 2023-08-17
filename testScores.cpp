#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>

using namespace std;
char getGradeLetter(float average);
float getAverage(int scores[] ,int size);
float getAverage(int scores[] ,int size) {
    float total = 0;
    for(int index = 0;index < size; index++) {
        total = total + scores[index];
    }
    return (total / size);
}
char getGradeLetter(float average) {
    char grade = 'F';
    if(average >= 90)
        grade='A';
    else if(average >= 80 && average < 90)
        grade='B';
    else if(average >= 70 && average < 80)
        grade='C';
    else if(average >= 60 && average < 70)
        grade='D';
    else
        grade='F';
    return grade;
}
int main() {
    const int MAX = 21;
    string filename;
    getline(cin, filename);

    string firstName[MAX];
    string lastName[MAX];
    int midTerm1[MAX];
    int midTerm2[MAX];
    int final[MAX];
    int score = 0;
    char gradeLetter = ' ';
    ifstream fin(filename);

    while(!fin.eof()) {
        fin >> firstName[score];
        fin >> lastName[score];
        fin >> midTerm1[score];
        fin >> midTerm2[score];
        fin >> final[score];
        score++;
    }
    fin.close();

    ofstream fout;
    fout.open("report.txt");

    for(int index = 0;index < score; index++) {
        float total = midTerm1[index] + midTerm2[index] + final[index];
        float avg = total / 3;
        gradeLetter = getGradeLetter(avg);
        fout << left << firstName[index];
        fout << "\t" << lastName[index];
        fout << "\t" << midTerm1[index];
        fout << "\t" << midTerm2[index];
        fout << "\t" << final[index] << "\t" << getGradeLetter(avg) << endl;
    }
    fout << fixed << setprecision(2) << "Averages: midterm1 " << getAverage(midTerm1, score) << ", midterm2 " << getAverage(midTerm2, score) << ", final " << getAverage(final, score) << endl;
    fout.close();

    cout << "Output write to report.txt file." << endl;
    system("pause");
    return 0;
}
//
// Created by Jalay Shukla on 12/7/21.
//

