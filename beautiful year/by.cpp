#include <bits/stdc++.h>
using namespace std;


int main() {
    int y;
    cin >> y;

    for(int i = y + 1;; ++i) {
        int year = i;
        vector<int> count(10,0);
        bool isDistinct = true;

        while(year > 0) {
            int digit = year % 10;
            count[digit]++;
            if(count[digit] > 1){
                isDistinct = false;
                break;
            }
            year /= 10;
        } 

        if(isDistinct) {
            cout << i << "\n";
            break;
        }
    }


    return 0;
}