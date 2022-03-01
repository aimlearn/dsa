#include <iostream>
#include <set>
#include <vector>
using namespace std;

vector<int> findSum(vector<int> vec, int val);
vector<int> findSumSet(int nums[], int val, int length);

int main() {
    vector<int> vec{1,2,3,4,5,6};
    vector<int> vec2 = findSum(vec, 6);
    for (int i : vec2) cout << i << "\t";
}

vector<int> findSum(vector<int> vec, int val) {
    sort(vec.begin(), vec.end());
    vector<int> vec2;
    int x = 0, y = vec.size()-1, a = vec[x], b = vec[y];
    while (true) {
        if (a+b > val) {
            b = vec[--y];
        } else if (a+b < val) {
            a = vec[++x];
        } else {
            vec2.push_back(a);
            vec2.push_back(b);
            break;
        }
    }
    return vec2;
}

vector<int> findSumSet(int nums[], int val, int length) {
    vector<int> vec;
    set<int> numset;
    for (int i = 0; i < length; i++) {
        if (numset.find(val - nums[i]) != numset.end()) {
            vec.push_back(nums[i]);
            vec.push_back(val - nums[i]);
            break;
        }
        if (numset.find(nums[i]) == numset.end()) numset.insert(nums[i]);
    }
    return vec;
}