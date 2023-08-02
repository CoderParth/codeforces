#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    string s;

    cin >> n;
    cin >> s;

    int A = 0, D = 0;

    for(char c : s) {
        (c == 'A') ? A++ : D++; 
    }

    if(A > D) {
        cout << "Anton" << "\n";
    } else if (A == D) {
        cout << "Friendship" << "\n";
    } else {
        cout << "Danik";
    }
    
    return 0;
}