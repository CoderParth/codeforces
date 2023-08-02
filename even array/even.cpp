#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;

        int e = 0, o = 0, i = 0;       
        while(n--) {
            int a;
            cin >> a;

            if(a % 2 != i % 2) {
                if(i % 2 == 0) {
                    e++;
                } else {
                    o++;
                }
            } 
            i++;
        } 

        if(e != o) {
            cout << -1 << "\n";
        } else {
            cout << e << "\n";
        }
    }
    return 0;
}
