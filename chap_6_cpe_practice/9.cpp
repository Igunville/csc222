#include <iostream>
#include <string>
using namespace std;

namespace alpha {
    int i = 4;
}
namespace beta {
    int i = alpha::i + 1;
}
int main() {
    beta::i += alpha::i;
    {
        using namespace beta;
        cout << i << endl;
    }
    return 0;
}
