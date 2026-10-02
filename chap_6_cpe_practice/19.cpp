#include <iostream>
#include <string>
using namespace std;

int main() {
    string s1 = "ACC";
    string s2 = "ACC!";
    cout << (s1.compare(s2) < 0) << endl;
    return 0;
}
