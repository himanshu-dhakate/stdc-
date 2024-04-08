#include "stdc++.h"
using namespace std;

int main() {
    vector<int> nums;

    for (int i = 0; i < 10; i++) {
         nums.push_back(i);
    }

    for (int elem : nums) {
        cout << elem << " ";
    }

    cout << '\n';
    return 0;
}