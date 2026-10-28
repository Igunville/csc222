#include <iostream>
using namespace std;

int main() {
    int a[6];
    for (int i = 0; i < 6; i++)
        a[i] = 2 * i + 4;
    cout << a[4] / a[1] << endl;

    return 0;
}
