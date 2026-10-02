#include <iostream>
#include <string>
using namespace std;

string multi_copy(string s = "_", int n = 1) {
    string clone_str;
    while (n--)
        clone_str += s;
    return clone_str;
}

int main() {
    string pattern = "!@";
    cout << multi_copy(pattern) << multi_copy () << multi_copy("#", 3) << endl;
    return 0;
}
