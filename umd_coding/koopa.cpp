#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <string>
#include <doctest.h>
using namespace std;


int count_koopa(string a){
    int koopa = 0;
    


    return koopa;
}
    
    
TEST_CASE("count_vowels counts lowercase vowels") {
    CHECK(count_koopa("Koopa") == -1);
    CHECK(count_koopa("KoopaKoopaPeach") == 2);
    CHECK(count_koopa("PeachKoopaMario") == 1);
    CHECK(count_koopa("LuigiKoolPeach") == 0);
    CHECK(count_koopa("LuigiKoolPeachKoopa") == 1);
}

