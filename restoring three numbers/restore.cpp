#include <bits/stdc++.h>
using namespace std;

int main() {
    int n = 4;

    vector<int> nums;
    while(n--) {
        int a;
        cin >> a;
        nums.push_back(a);
    }

    sort(nums.begin(), nums.end());
    int sum = nums[nums.size() - 1];

    vector<int> abc;
    for(int i = 0; i < nums.size() - 1; ++i) {
        abc.push_back(sum - nums[i]);
    }
   

    for(int i : abc) cout << i << " ";

    return 0;
}