#include <iostream>
using namespace std;

int main() {
    int a = 2, b = 3;
    if (a > b && b > a)
        a++;
    if (a > b || b > a)
        b++;
    if (a | b)
        a++;
    if (a & b)
        b++;
    cout << a * b << endl;

    return 0;
}
