#include <iostream>
#include <cmath>

using namespace std;

bool is_prime(int n) {
    if (n == 1) return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return false;
    }
    return true;
}

void print_primes(int n1, int n2) {
    for (int i = n1; i <= n2; i++) {
        if (is_prime(i)){
            cout << i << endl;
        }
    }
}

int main() {
    int number_of_lines;
    cin >> number_of_lines;

    for (int i = 0; i < number_of_lines; i++) {
        int n1, n2;
        cin >> n1;
        cin >> n2;
        print_primes(n1, n2);
        cout << endl;
    } 

    return 0;
}
