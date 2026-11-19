#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <string>
#include <doctest.h>
using namespace std;


int count_koopa(string word){
    int koopa = 0;
    if(word == "Koopa"){
        koopa = -1;}
    for(int c = 0; c <= (int)word.length() - 5; c++ ){
        if(word[c] == 'K' &&
           word[c + 1] == 'o' &&
           word[c + 2] == 'o' &&
           word[c + 3] == 'p' &&
           word[c + 4] == 'a') {
            koopa ++;
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

