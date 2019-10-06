#include <iostream>

using namespace std;

int reverse_number(int num) {
    int rev = 0;
    while (num > 0) {
        rev = rev * 10 + num % 10;
        num = num / 10;
    }
    return rev;
}

int main() {
    int number_of_lines;
    cin >> number_of_lines;
    for (int i = 0; i < number_of_lines; i++) {
        int n1;
        cin >> n1;
        int n2;
        cin >> n2;
        cout << reverse_number(reverse_number(n1) + reverse_number(n2)) << endl;
    }
    return 0;
}
