#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    
    cin >> s;

    int one = 0, two = 0, three = 0;

    for(int i = 0; i < s.size(); i++) {
        if(s[i] == '1') {
            one++;
        } else if (s[i] == '2') {
            two++;
        } else if (s[i] == '3') {
            three++;
        }
    }

    int total = one + two + three;

    string newString;

    while(total--) {
        if(one > 0) {
            newString.push_back('1');
            one--;
        } else if (two > 0) {
            newString.push_back('2');
            two--;
        } else {
            newString.push_back('3');
            three--;
        }
        total >= 1 ? newString += '+' : newString;     
    }

    cout << newString << "\n";
    return 0;
}