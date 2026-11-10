#include <string>
#include <vector>
#include <iostream>
using namespace std;

int num_vector_product(const vector<int>& nums){
    int product = 1;
    
    for (int i = 0; i < nums.size(); i++){
        product = product * nums[i];
    }
    return product;

}
