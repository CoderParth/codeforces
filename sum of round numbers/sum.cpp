#include <bits/stdc++.h>
using namespace std;

int printRounds(int num) {
    int summands = 0;
    int current_num = num;

    vector<int> rounds;
    int i = 1;
    while(current_num > 0) {  
        int digit = current_num % 10;
        if(digit != 0) {
            rounds.push_back(digit * i);
            summands++;
        }
        current_num = current_num / 10;
        i *= 10;
    }

    cout << summands<< "\n";
    for(int r : rounds) {
        cout << r << " ";
    }
    cout << "\n";
    return 0;
}

int main() {
    int t;
    cin >> t;

    vector<int> nums;
    while(t--) {
        int n;
        cin >> n;

        nums.push_back(n);
    }

    for(int i : nums) {
        printRounds(i);
    }
    
    return 0;
}