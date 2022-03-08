#include <iostream>
#include <vector>
using namespace std;

vector<int> rotateArray(vector<int> vec);

int main() {
    vector<int> nums{1,2,3,4,5,6,7,8};
    nums = rotateArray(nums);

    for (int i : nums) cout << i << "\t";

    return 0;
}

vector<int> rotateArray(vector<int> vec) {
    int temp, a = vec.size() - 1;

    for (int i = 0; i < vec.size(); i++) {
        temp = vec[i];
        vec[i] = vec[a];
        vec[a] = temp;
    }

    return vec;
}