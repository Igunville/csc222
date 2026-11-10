#include <string>
#include <vector>
#include <iostream>
using namespace std;

int num_vector_sum(const vector<int>& nums){
    int sum = 0;
    for (int i = 0; i < nums.size(); i++){
        sum += nums[i];
    }
    return sum;
}
