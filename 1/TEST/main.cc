#include <iostream>
#include <cstring>

using namespace std;

int main() {
    string str;
    while(1){
        getline(cin, str);
        if (!str.compare("42")) break;
        cout << str << endl;
    }
    return 0;
}
