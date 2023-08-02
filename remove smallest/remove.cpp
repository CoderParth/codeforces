#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        vector<int> nums;
        while(n--) {
            int a;
            cin >> a;
            nums.push_back(a);
        }

        sort(nums.begin(), nums.end());

        string res = "YES";
        for(int i = 0; i < nums.size() -1; ++i) {
            if(nums[i+1] - nums[i] > 1) {
                res = "NO";
                break;
            }
        }
        
        cout << res << "\n";
    }

    return 0;
}