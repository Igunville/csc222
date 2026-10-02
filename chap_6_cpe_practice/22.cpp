#include <iostream>
using namespace std;

int f(char x) {
    return x * x;
}

int f(float g) {
    return int(g);
}

int f(int a, int b = 0, int c = 5) {
    int total = 0;
    while (--c)
        total += b;
    return total - a;
}

int main() {
    char ch = 3;
    cout << f(2, 3, 4) << f(0, 2) << f(1) << f(ch) << endl;
    return 0;
}
