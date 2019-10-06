#include <iostream>

using namespace std;

int factorial(int n) {
    return n <= 1 ? 1 : n * factorial(n - 1);
}

int main() {
    int numberOfLines;
    cin >> numberOfLines;
    for (int i = 0; i < numberOfLines; i++) {
        int n;
        cin >> n;
        cout << factorial(n) << endl;
    }
}