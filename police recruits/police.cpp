#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> events;
    while(n--) {
        int e;
        cin >> e;
        events.push_back(e);
    }


    int recruited = 0;
    int untreated = 0;
    for(int i = 0; i < events.size(); ++i) {
        if(recruited == 0 && events[i] == -1) {
            untreated++;
        } else if (events[i] > 0) {
            recruited += events[i];
        } else if(events[i] == -1 && recruited > 0) {
            recruited--;
        }
    }

    cout << untreated << "\n";
    return 0;
}