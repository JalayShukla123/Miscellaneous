#include <iostream>
#include <cstring>
using namespace std;

void makeUpper(char sentence[], int sentenceLength) {
    char *Ptr = sentence;
    int count = 0;
    sentence[0] = toupper(sentence[0]);
    bool flag = false;
    for (int i = 0; i < sentenceLength; i++) {
        if (*Ptr=='.') {
            flag = true;
        }
        if(flag && i!=sentenceLength-1 && sentence[i+1]!=' ') {
            sentence[i+1] = toupper(sentence[i+1]);
            flag = false;
        }
        Ptr = Ptr + 1;
    }
    while (sentence[count] != '\0') {
        cout << sentence[count];
        count++;
    }
}
int main() {
    char sentence[200];
    cin.getline(sentence, 200);
    makeUpper(sentence, strlen(sentence));
    return 0;
}