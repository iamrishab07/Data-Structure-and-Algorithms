//
// Created by rishabpan on 12/12/19.
// Problem Statement : https://www.codechef.com/DEC19B/problems/PLMU
//

#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int inputArr[n];
        int countOfTwo = 0;
        int countOfZero = 0;

        for (int i = 0; i < n; i++) {
            cin >> inputArr[i];
            if (inputArr[i] == 2) countOfTwo++;
            if (inputArr[i] == 0) countOfZero++;
        }

        int count = ((countOfTwo * (countOfTwo - 1)) / 2) + ((countOfZero * (countOfZero - 1)) / 2);

        cout<<count<<endl;
    }
}
