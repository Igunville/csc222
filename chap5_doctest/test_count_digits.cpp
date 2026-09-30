#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <doctest.h>
using namespace std;

int count_digits(int n) {
    if (n == 0) return 1; 
    int i = 0;
    while (n >= 1) {
        i += 1;
        n /= 10;
    }
    return i;
}

TEST_CASE("count_digits(int n) returns number of decimal digits in n") {
    CHECK(count_digits(7) == 1);
    CHECK(count_digits(73) == 2);
    CHECK(count_digits(999) == 3);
    CHECK(count_digits(0) == 1);
    CHECK(count_digits(100000) == 6);
    CHECK(count_digits(0xFF) == 3);
    CHECK(count_digits(0123) == 2);
}   
