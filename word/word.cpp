#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    int upper = 0, lower = 0;

    for(char c : s) {
        if(isupper(c)) {
            upper++;
        } else {
            lower++;
        }
    }    

    for(int i = 0; i < s.size(); ++i) {
        if(lower >= upper) {
           s[i]=  tolower(s[i]);
        } else {
            s[i] = toupper(s[i]);
        }
    }

    cout << s << "\n"; 
    return 0;
}