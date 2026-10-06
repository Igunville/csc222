#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <string>
#include <doctest.h>
using namespace std;

string reverse_string(string word){
    string final;
    for (int y = word.length() - 1; y!= -1; y--){
        char letter = word[y];
        final.push_back(letter);
    }
    return final;
}
TEST_CASE("reverse_string(s) returns s backwards") {
    CHECK(reverse_string("happy") == "yppah");
    CHECK(reverse_string("GHC!") == "!CHG");
    CHECK(reverse_string("The end.") == ".dne ehT");
    }
