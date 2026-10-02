#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "PQ";
    s.append(s).push_back(s[s.length() - 1]);
    cout << s << endl;
    return 0;
}
