#include <iostream>
#include <vector>
using namespace std;

int findMaxSumSubArray(vector<int> vec);

int main() {
    vector<int> nums{-1,-1,0,2};
    int x = findMaxSumSubArray(nums);
    cout << x;
    return 0;
}

int findMaxSumSubArray(vector<int> vec) {
    int currentSum = 0, maxSum = 0;

    for (int i = 0; i < vec.size(); i++) {
        if (currentSum + vec[i] > 0) {
            currentSum += vec[i];
            if (currentSum > maxSum) {
                maxSum = currentSum;
            }
        } else {
            currentSum = 0;
        }
    }

    if (maxSum == 0) {
        int max = INT32_MIN; 
        for (int i = 0; i < vec.size(); i++) {
            if (max < vec[i]) max = vec[i];
        }
        maxSum = max;
    }

    return maxSum;
}