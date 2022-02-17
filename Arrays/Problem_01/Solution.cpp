#include <vector>
#include <iostream>
using namespace std;

vector<int> removeEven(vector<int> nums) {
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] % 2 == 0) {
            nums.erase(nums.begin()+i);
        }
    }
    return nums;
}