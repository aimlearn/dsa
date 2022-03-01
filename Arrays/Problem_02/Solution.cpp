#include <vector>
#include <iostream>
using namespace std;

vector<int> mergeArray(int a1[], int a2[], const int m, const int n); // prototype

int main() {
    int a1[4] = {1,3,4,5}, a2[4] = {2,6,7,8};
    vector<int> vec = mergeArray(a1, a2, 4, 4);
    for (int i : vec)
        cout << i << "\t";
}

vector<int> mergeArray(int a1[], int a2[], const int m, const int n) { // implementation
    int x = 0, y = 0;
    int a = a1[x], b = a2[y];
    vector<int> vec;
    for (int i = 0; i < m + n; i++) {
        if (x < m || y >= n) {
            if (y >= n)
                b = INT32_MAX;
            if (a > b) {
                vec.push_back(b);
                b = a2[++y];
            } else {
                vec.push_back(a);
                a = a1[++x];
            }
        } else {
            vec.push_back(b);
            b = a2[++y];
        }
    }
    return vec;
}
