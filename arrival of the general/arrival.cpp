#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> heights(n);

   for(int i = 0; i < n; ++i) {
        int a;
        cin >> a;
        heights[i] = a;
   }

    int lowest = INT_MAX;
    int lowest_index;

    int greatest = INT_MIN;
    int greatest_index;

    for(int i = 0; i < n; ++i) {
        if (heights[i] > greatest) {
            greatest = heights[i];
            greatest_index = i;
        }
    }

    int t = 0;
    while(greatest_index != 0) {
        swap(heights[greatest_index], heights[greatest_index - 1]);
        greatest_index--;
        t++;
    }


    for(int i = 0; i < n; ++i) {
         if(heights[i] <= lowest) {
            lowest = heights[i];
            lowest_index = i;
        } 
    }

    while(lowest_index != n -1) {
        swap(heights[lowest_index], heights[lowest_index + 1]);
        lowest_index++;
        t++;
    }

    cout << t << "\n";
    return 0;
}