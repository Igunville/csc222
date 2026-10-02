#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "ABCDEFGHIJ";
    cout << s.substr(2, 5).substr(2).substr() << endl;
    return 0;
}
