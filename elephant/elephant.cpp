// #include <bits/stdc++.h>
// using namespace std;

/*
Greedy APPROACH
*/
// int main() {
//     vector<int> steps = {1,2,3,4,5};

//     int x;
//     cin >> x;

//     int count = 0;
//     int totalsteps = 0;
//     int n = steps.size() - 1;
//     while(x != totalsteps) {
//         if(steps[n] <= x && totalsteps + steps[n] <= x) {
//             totalsteps += steps[n];
//             count++;
//         } else {
//             n--;
//         } 
//     }

//     cout << count << "\n";
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main() {
    int x;
    cin >> x;

    int steps = x / 5;
    if (x % 5 != 0)
        steps++;

    cout << steps << "\n";

    return 0;
}
