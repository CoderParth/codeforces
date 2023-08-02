#include <bits/stdc++.h>
using namespace std;


int main() {
    int t;
    cin >> t;

    vector<int> ways;
    while(t--){
        int n, count;
        cin >> n;

        if(n % 2 == 0) {
            count = n / 2 - 1;
        } else {
            count = n / 2;
        }
        
       ways.push_back(count);
    }

    for(int i : ways) {
        cout << i << "\n";
    }
    return 0;
}