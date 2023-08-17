#include <iostream>
using namespace std;
int factorialFunction(int n) {
    if (n > 0) {
        return n * factorialFunction(n-1);
    }
    else
        return 1;
}
int main() {
    int n = 0;
    cin >> n;
    cout << factorialFunction(n);
    return 0;
}
