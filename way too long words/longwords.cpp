#include <bits/stdc++.h>
using namespace std;

string reduceLength(const string& w) {
    int len = w.size();

    if(len > 10) {
        return w[0] + to_string(len-2) + w[len-1];
    }

    return w;
}

int main() {
    int n;
    cin >> n;

    while(n--) {
        string word;
        cin >> word;
        cout << reduceLength(word) << endl;
        
    }
    return 0;
}
