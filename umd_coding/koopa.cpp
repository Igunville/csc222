#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <string>
#include <doctest.h>
using namespace std;


int count_koopa(string word){
    int koopa = 0;
    for(char c : word){
        if(c == 'K'){
            if(c == 'o'){
                if(c == 'o'){
                    if(c == 'p'){
                        if(c == 'a'){
                            koopa ++;
                        }
                    }
                }
            }
        }
    }



    return koopa;
}
    
    
TEST_CASE("count_vowels counts lowercase vowels") {
    CHECK(count_koopa("Koopa") == -1);
    CHECK(count_koopa("KoopaKoopaPeach") == 2);
    CHECK(count_koopa("PeachKoopaMario") == 1);
    CHECK(count_koopa("LuigiKoolPeach") == 0);
    CHECK(count_koopa("LuigiKoolPeachKoopa") == 1);
}

