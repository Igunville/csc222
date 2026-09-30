#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <doctest.h>
using namespace std;

bool is_divisible_by(int n, int m) {
    if (n % m == 0) return true;
    return false;

}



TEST_CASE("is_divisible_by(int n, int d) returns whether d divides n") {
    CHECK(is_divisible_by(10, 5) == true);
    CHECK(is_divisible_by(10, 3) == false);
    CHECK(is_divisible_by(3, 10) == false);
    CHECK(is_divisible_by(0, 7) == true);
}
