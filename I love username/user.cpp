#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int count = -2;
    int best = INT_MIN, worst = INT_MAX;
    while(n--) {
        int a;
        cin >> a;

        if(a > best) {
            best = a;
            count++;
        } 

        if(a < worst) {
            worst = a;
            count++;
            
        }    

    }

    cout << count << "\n";

    return 0;
}