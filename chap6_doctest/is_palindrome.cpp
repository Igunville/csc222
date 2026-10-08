#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <string>
#include <doctest.h>
using namespace std;

bool is_palindrome(string word){
    string final;
    for (int y = word.length() - 1; y!= -1; y--){
        char letter = word[y];
        final.push_back(letter);
    }
    if (final == word) return true;
    else return false;
}



    TEST_CASE("is_palindrome detects palindromes") {
    CHECK(is_palindrome("") == true);
    CHECK(is_palindrome("a") == true);
    CHECK(is_palindrome("aba") == true);
    CHECK(is_palindrome("abba") == true);
    CHECK(is_palindrome("abc") == false);
}
