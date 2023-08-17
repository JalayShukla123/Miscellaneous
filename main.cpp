#include <iostream>
using namespace std;
char reverseOrder(char input[], int mySize) {
    int i = 0;
    if (i <= mySize) {
        std::cout << input[mySize];
        return reverseOrder(input, (mySize - 1));
    }
    else
        return 0;

}
int main() {
    char input[] = "Hello, World";
    int mySize = sizeof(input)-2;
    cout << mySize;
    reverseOrder(input, mySize);
    //std::cout << reverseOrder(input, mySize) << std::endl;
    return 0;
}
