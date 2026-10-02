#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "ABCDE";
    s.append(s.substr(3)).push_back(s[s.length() - 2]);
    cout << s << endl;

    return 0;
}
