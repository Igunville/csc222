#include <iostream>
using namespace std;

int f(int a, int b = 0, int c = 5) {
    int total = 0;
    while (--c)
        total += b;
    return total - a;
}


int main() {
    cout << f(3, 1, 2) << f(5, 2) << f(0) << endl;
    return 0;
}
