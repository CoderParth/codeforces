#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> nums;
    while(n--) {
        int a;
        cin >> a;
        nums.push_back(a);
    }

    // sort(nums.begin(), nums.end()); // O(nlogn)
    int highest = INT_MIN;

    for(int i = 0; i < nums.size(); ++i) {
        if(nums[i] > highest) {
            highest = nums[i];
        }
    }

    int total = 0;
    // after sorting we could get the highest like this
    // int highest = nums[nums.size() - 1];

    for(int i = 0; i < nums.size() ; ++i) {
        total += highest - nums[i]; 
    }

    cout << total << "\n";

    return 0;
}