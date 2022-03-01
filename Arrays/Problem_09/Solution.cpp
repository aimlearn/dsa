#include <iostream>
#include <vector>
using namespace std;

vector<int> rotateArray(vector<int> vec);

int main() {
    vector<int> nums{1,2,-3,5,-2,4,5,1,-2,3,-2};
    nums = rotateArray(nums);

    for (int i : nums) cout << i << "\t";

    return 0;
}

vector<int> rotateArray(vector<int> vec) {
    int temp, a = 0;

    for (int i = 0; i < vec.size(); i++) {
        if (vec[i] < 0) {
            temp = vec[a];
            vec[a++] = vec[i];
            vec[i] = temp;
        }
    }

    return vec;
}