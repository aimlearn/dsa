#include <iostream>
#include <vector>
using namespace std;

int findFirstUnique(vector<int> vec);

int main() {
    vector<int> nums{2,2,4,4,3};
    int x = findFirstUnique(nums);
    return 0;
}

int findFirstUnique(vector<int> vec) {
    int i = 0, j = 1, firstUnique = vec[i];

    while (true) {
        if (j == vec.size() - 1) {
            break;
        }
        if (vec[i] == vec[j]) {
            firstUnique = vec[++i];
        } else {
            j++;
        }
    }

    cout << firstUnique;
    return 0;
}