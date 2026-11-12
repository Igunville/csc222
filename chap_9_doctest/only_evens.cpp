#include <string>
#include <vector>
#include <iostream>
using namespace std;

vector<int> only_evens(const vector<int>& nums){
    vector<int> evens;

for(int i = 0; i < nums.size(); i++){
    if(nums[i] % 2 == 0){
        evens.push_back(nums[i]);
        }
    }
    return evens;
}
