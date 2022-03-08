#include <iostream>
#include <vector>
using namespace std;

int findFirstUnique(vector<int> vec);

int main() {
    vector<int> nums{9,3,3,1,1,3,9};
    int x = findFirstUnique(nums);
    cout << x;
    return 0;
}

int findFirstUnique(vector<int> vec) {
    int firstUnique = -1;
    bool found = true;

    for (int i = 0; i < vec.size(); i++) {
        found = true;
        for (int j = 0; j < vec.size(); j++) {
            if (i != j && vec[i] == vec[j]) {
                found = false;
                break;
            }
        }
        if (found) {
            firstUnique = vec[i];
            break;
        }
    }
    return firstUnique;
}