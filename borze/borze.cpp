#include <bits/stdc++.h>
using namespace std;

int main() {
    string code;
    cin >> code;

    // unordered_map<string,int> map = {
    //     {".", 0},
    //     {"-.", 1},
    //     {"--", 2},
    // };

    // for(int i = 0; i < code.size(); ++i) {
    //     string c = string(1, code[i]) + string(1, code[i+1]);
    //     if(map.count(string(1, code[i]))) {
    //         cout << map[string(1, code[i])];
    //     } else if(map.count(c)) {
    //         cout << map[c];
    //         ++i;
    //     }
    // }

    for(int i = 0; i < code.size(); ++i) {
        if(code[i] == '.') {
            cout << 0; 
        } else if(code[i] == '-' && code[i+1] == '.') {
            cout << 1;
            ++i;
        } else if(code[i] == '-' && code[i+1] == '-') {
            cout << 2;
            ++i;
        }
    }
    return 0;
}