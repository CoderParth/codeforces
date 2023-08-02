// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;

//     while(t--) {
//         int n;
//         cin >> n;

//         int pos = 0;
//         int neg = 0;
//         int multiple = 1;
//         int moves = 0;
//         while(n--) {
//             int a; 
//             cin >> a;
//             if(a == 1) {
//                 pos++;
//             } else {
//                 neg++;
//             }
//             multiple *= a;
//         }
 
//         while(pos < neg) {
//                 pos++;
//                 neg--;
//                 moves++;
//                 multiple *= -1;
//         }

//         if(multiple != 1) {
//             moves++;
//         }

//         cout << moves << "\n";
//     }
//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        int pos = 0;
        int neg = 0;
        while(n--) {
            int a; 
            cin >> a;
            if(a == 1) {
                pos++;
            } else {
                neg++;
            }
        }
 
        if(neg % 2 == 0) {
            if(pos < neg) {
                cout << neg - pos << "\n";
            } else {
                cout << 0 << "\n";
            }
        } else {
            if(pos <= neg) {
                cout << neg - pos + 1 << "\n";
            } else {
                cout << 0 << "\n";
            }
        }
    }
    return 0;
}
