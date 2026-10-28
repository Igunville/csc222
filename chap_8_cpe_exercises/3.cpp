#include <iostream>
using namespace std;

int main() {
    int a = 1, b = 2, c;
    a = a << b;
    b = b << a;
    c = b >> a;
    cout << c << endl;

    return 0;
}
