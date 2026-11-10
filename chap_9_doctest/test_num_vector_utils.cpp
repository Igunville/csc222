#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <doctest.h>
#include <string>
#include <vector>
#include "num_vector_utils.h"
using namespace std;

TEST_CASE("Testing render_num_vector") {
    vector<int> nums = {1, 3, 7};
    string numstr = render_num_vector(nums);
    string expected = "1 3 7";
    CHECK(numstr == expected);
    vector<int> nums2 = {1, 3, 7, 1, 9, 4, 3, 6, 2, 9};
    string numstr2 = render_num_vector(nums2);
    string expected2 = "1 3 7 1 9 4 3 6 2 9";
    CHECK(numstr2 == expected2);
    vector<int> nums3 = {};
    string numstr3 = render_num_vector(nums3);
    string expected3 = "";
    CHECK(numstr3 == expected3);
}

TEST_CASE("Testing num_vector_sum") {
    vector<int> nums = {1, 3, 7};
    CHECK(11 == num_vector_sum(nums));
}

TEST_CASE("Testing num_vector_product") {
    vector<int> nums = {2, 3, 7};
    CHECK(42 == num_vector_product(nums));
}

