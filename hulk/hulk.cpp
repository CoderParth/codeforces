#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<string> feelings(n);

    for(int i = 0; i < n; ++i) {
        if(i % 2 == 0) {
            feelings[i] += "I hate";
        } else {
            feelings[i] += "I love";
        }
    }

    feelings[n-1] += " it";
    for(int j = 0; j < n; ++j) {
        cout << feelings[j];
        if(j != n-1) cout << " that ";
    }
    return 0;
}