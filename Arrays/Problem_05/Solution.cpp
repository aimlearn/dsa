#include <iostream>
using namespace std;

int minimum(int nums[], int length);

int main() {
    int arr[] = {5,4,3,6,8,9};
    int x = findMinimum(arr, 6);
    cout << x;
}

int findMinimum(int nums[], int length) {
    int min = nums[0];
    for (int i = 0; i < length; i++) {
        if (nums[i] < min) min = nums[i];
    }
    return min;
}