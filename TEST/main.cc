#include <iostream>
#include <cstring>

using namespace std;

int main() {
    std::string str;
    while (std::getline(cin, str) && str.compare("42"))
        std::cout << str << std::endl;
    return 0;
}
