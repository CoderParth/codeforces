#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        string s;
        cin >> s;

        unordered_map<char, int> map;
        bool suspicious = false;
        for(int i = 0; i < s.size(); ++i) {
            if(i > 0) {
                if(s[i] != s[i-1]){
                    if(map.count(s[i])) {
                        cout << "NO" << "\n";
                        suspicious = true;
                        break;
                    } 
                }
            }
            map[s[i]]++;
        }

        if(!suspicious) {
            cout << "YES" << "\n";
        }
    
    }
    return 0;
}