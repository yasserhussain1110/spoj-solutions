#include <iostream>

using namespace std;

int fact_zeros (int n) {
    int f = 5;
    int count = 0;
    while (n >= f) {
        count += n / f;
        f *= 5;
    }
    return count;
}

int main () {
    int number_of_lines;
    cin >> number_of_lines;
    for (int i = 0; i < number_of_lines; i++) {
        int n;
        cin >> n;
        cout << fact_zeros(n) << endl;
    }
    return 0;
}
