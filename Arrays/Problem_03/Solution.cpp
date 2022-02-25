#include <iostream>
#include <set>
#include <vector>
using namespace std;

vector<int> findSum(int nums[], int val, int length);

int main() {
    int arr[] = {1,2,3,4,5,6};
    vector<int> vec = findSum(arr, 11, 6);
    for (int i : vec) cout << i << "\t";
}

vector<int> findSum(int nums[], int val, int length) {
    vector<int> vec;
    set<int> numset;
    for (int i = 0; i < length; i++) {
        if (numset.find(nums[i]) == numset.end()) numset.insert(nums[i]);
        if (numset.find(val - nums[i]) != numset.end()) {
            vec.push_back(nums[i]);
            vec.push_back(val - nums[i]);
            break;
        }
    }
    return vec;
}