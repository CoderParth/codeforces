#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; 
    cin >> n;

    vector<vector<int>> teams;

    while(n--) {
        int a,b;
        cin >> a >> b;
        vector<int> team;
        team.push_back(a);
        team.push_back(b);
        teams.push_back(team);
    }

    int nums = 0;
    for(int i = 0; i < teams.size(); ++i) {
        for(int j = 0; j < teams.size(); ++j) {
            if( i != j && teams[i][0] == teams[j][1]) {
                nums++;
            }
        }
    }

    cout << nums << "\n";
    return 0;
}