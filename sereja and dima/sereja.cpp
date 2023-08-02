#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> cards;
    while(n--) {
        int a;
        cin >> a;
        cards.push_back(a);
    }

    int s = 0, d = 0;
    bool s_turn = true;
    int i = 0;
    int j = cards.size() - 1;

    while(i < cards.size() && j >= i) {
        if(s_turn) {
            if(cards[i] > cards[j]) {
                s += cards[i]; 
                i++;
            } else {
                s += cards[j];
                j--;
            }
            s_turn = false;
        } else {
            if(cards[i] > cards[j]) {
                d += cards[i]; 
                i++;
            } else {
                d += cards[j];
                j--;
            }
            s_turn = true;
        }
    }

    cout << s << " " << d << "\n";

    return 0;
}