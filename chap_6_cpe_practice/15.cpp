#include <iostream>
#include <string>
using namespace std;

int main() {
    string s1 = "A";
    string s2 = "B";
    string s3 = "C";
    s1.swap(s2);
    s2.swap(s3);
    s3.swap(s2);
    cout << s1 << s2 << s3 << endl;
    return 0;
}
