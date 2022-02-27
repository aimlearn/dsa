#include <iostream>
#include <vector>

using namespace std;

vector<int> findProduct(vector<int> nums);

int main() {
    vector<int> vec{1,2,3,4,3,2,1};

    vec = findProduct(vec);

    for (int i : vec)
        cout << i << "\t";
}

vector<int> findProduct(vector<int> nums) {
    int initProduct = 1, temp = 1;

    for (int i = 0; i < nums.size(); i++) initProduct *= nums[i]; // Initial product setting loop.

    for (int i = 0; i < nums.size(); i++) { // Result producing loop.
        initProduct /= nums[i];
        initProduct *= temp;
        temp = nums[i];
        nums[i] = initProduct;
    }

    return nums;
}