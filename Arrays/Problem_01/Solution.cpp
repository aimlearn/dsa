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

int main() {
    vector<int> vec2{1,2,3,4,5,6,7,8,7,5,8,9};
    vector<int> vec = removeEven(vec2);
    for (int i : vec) {
        cout << i;
    }
    return 0;
}