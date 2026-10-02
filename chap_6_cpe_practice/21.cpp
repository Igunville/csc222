#include <iostream>
using namespace std;

int f(char x) {
    return x * x;
}

int f(int a, int b = 0, int c = 5) {
    int total = 0;
    while (--c)
        total += b;
    return total - a;
}


int main() {
    char ch = 3;
    cout << f(1, 4, 2) << f(5, 2) << f(0) << f(ch) << endl;
    return 0;
}

