//
// Created by rishabpan on 12/12/19
// Question Link :  https://www.codechef.com/DEC19B/problems/WATSCORE.
//

#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[12] = {0};
        int total = 0;

        for (int i = 0; i < n; i++) {
            int p, score;
            cin >> p >> score;
            if (p <= 8) {
                arr[p] = max(arr[p], score);
            }
        }

        for (int i = 0; i < 12; i++) total += arr[i];

        cout << total << endl;
    }
    return 0;
}
