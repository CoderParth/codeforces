// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;

//     vector<int> talents(n + 1, 0);
//     for(int i = 1; i <= n; ++i) {
//         int t; 
//         cin >> t;
//         talents[i] = t; 
//     }

//     unordered_map<int, vector<int>> map;

//     for(int i = 1; i < talents.size(); ++i) {
//         map[talents[i]].push_back(i);
//     }

//     int min = INT_MAX;

//     for(auto kv : map) {
//         if(kv.second.size() < min) {
//             min = kv.second.size();
//         }
//     }

//     vector<int> indices;
    
//     if(map.size() == 3) {    
//         int curr = 1;
//         int l = 0;

       
//         while(l < min) {
//             while(curr < 4) {
//                 indices.push_back(map[curr][l]); 
//                 curr++;
//             }
//             l++;
//             curr = 1;
//         }
        
        
//         cout << indices.size() / 3 << "\n";
//         int p = 0;
//         for(int i = 0; i < indices.size(); ++i) {
//             if(p == 3) {
//                 cout << "\n";
//                 p = 0;
//             }
//             cout << indices[i] << " ";
//             p++;
//         }
//     } else {
//         cout << 0 << "\n";
//     }

  
//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> prog, math, pe;

    for(int i = 1; i <= n; ++i) {
        int t;
        cin >> t;
        if(t == 1) prog.push_back(i);
        else if(t == 2) math.push_back(i);
        else pe.push_back(i);
    }

    int teams = min({prog.size(), math.size(), pe.size()});
    cout << teams << "\n";

    for(int i = 0; i < teams; ++i) {
        cout << prog[i] << " " << math[i] << " " << pe[i] << "\n";
    }

    return 0;
}
