#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> scores(n);

    for(int i = 0; i < n; i++) {
        int a;
        cin >> a;
        scores.push_back(a);
    } 
    int count = 0;
    for(int i = 0; i < n; i++) {
        if(scores[i] >= scores[k] && scores[i] > 0) {
            count++;
        }
    }

    cout << count;
    return 0;    
}