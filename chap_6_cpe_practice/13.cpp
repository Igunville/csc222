#include <iostream>
using namespace std;

namespace A {
    int n = 1;
}

namespace B {
    int n = 2;
}

int main() {
    { using namespace A;
        B::n = n + 1;
    }
    { using namespace B;
        A::n = n + 1;
    }
    cout << A::n << ' ' << B::n << endl;
    return 0;
}
