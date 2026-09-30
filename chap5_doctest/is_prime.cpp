#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <doctest.h>
using namespace std;

bool is_prime(int n) { 

    int count = 1;
    while (count < n){
        if (n % n == 0 && n != 1){
            return false;
        }
        count++;
    }
    if (n <= 1) return false;
    if (n <= 3) return true;
    for (int p  = 2; p < n; p++){
        if (n % p  == 0) return false;
    }
    return true;
}

TEST_CASE("is_prime(int n) returns true if n is a prime number") {
    CHECK(is_prime(0) == false);
    CHECK(is_prime(1) == false);
    CHECK(is_prime(2) == true);
    CHECK(is_prime(3) == true);
    CHECK(is_prime(4) == false);
    CHECK(is_prime(9) == false);
    CHECK(is_prime(19) == true);
    CHECK(is_prime(27) == false);
}

