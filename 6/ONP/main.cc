#include <iostream>
#include <stack>

using namespace std;

bool isOperand(char c) {
    return c >= 'a' && c <= 'z';
}

bool isOperator(char c){
    return c == '+' || c == '-' || c == '*' || c == '/';
}

void pon() {
    char c;
    stack<char> operatorStack;
    cin >> c;
    while (c != '\n') {
        if (isOperand(c)) {
            cout << c;
        } else if (isOperator(c)) {
            operatorStack.push(c);
        } else if (c == ')') {
            if (!operatorStack.empty()) {
                cout << operatorStack.top();
                operatorStack.pop();
            }
        }
        cin >> c;
    }
}

int main() {
    int numberOfLines;
    cin >> numberOfLines;
    for (int i = 0; i < numberOfLines; i++) {
        pon();
    }
}