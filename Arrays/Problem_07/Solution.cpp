#include <iostream>
#include <vector>
using namespace std;

int findSecondMaximum(vector<int> vec);

int main() {
    vector<int> nums{1,2,3,4};
    int x = findSecondMaximum(nums);
    cout << x;
}

int findSecondMaximum(vector<int> vec) {
    int least = INT32_MIN, max = vec[0];
    for (int i : vec) {
        if (i > max) {
            least = max;
            max = i;
        }
        else if ((i < max) && (i > least)) least = i;
    }
    return least;
}