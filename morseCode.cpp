#include <iostream>
#include <string>
using namespace std;

string textToCode(char eachChar) {
    string characters = " ,.?0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string morseCode[] = {"space", "--..--", ".-.-.-", "..--..", "-----",
                          ".----", "..---", "...--", "....-", ".....", "-....",
                          "--...", "---..", "----.", ".-","-...","-.-.","-..", ".", "..-.", "--.",
                          "....", "..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-",
                          ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--.."};

    int index = characters.find(eachChar);
    if (index != -1)
        return morseCode[index];
    else
        return " ";
}
int main() {
    string input, morseCode = "";
    getline(cin, input);

    for (int i = 0; i < input.length(); i++) {
        input[i] = toupper(input[i]);
        morseCode += textToCode(input[i]);
    }
    cout << morseCode << endl;

    return 0;
}
