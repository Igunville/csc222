#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <doctest.h>
using namespace std;

int largest_digit(int n){
    int largest = 0;
    int d;
    if (n < 0) n = -n;
    while (n != 0){
        d = n % 10;
        largest = (d > largest) ? d : largest;
        n /= 10;
    }
    return largest;
}

TEST_CASE("largest_digit(int n) returns the largest digit in n") {
    CHECK(largest_digit(0) == 0);
    CHECK(largest_digit(1030) == 3);
    CHECK(largest_digit(7986) == 9);
    CHECK(largest_digit(-584) == 8);
    CHECK(largest_digit(0xFF) == 5);
    CHECK(largest_digit(0123) == 8);
}
