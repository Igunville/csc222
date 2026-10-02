#include <iostream>
using namespace std;

namespace ACC {
    int program_count = 4;
}
namespace ACC {
    int programs2024 = program_count + 2;
}
int main() {
    ACC::program_count /= 2;
    {
        using namespace ACC;
        programs2024++;
    }
    cout << ACC::program_count << ' ' << ACC::programs2024 << endl;
    return 0;
}
