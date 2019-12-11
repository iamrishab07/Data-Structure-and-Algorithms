//
// Created by rishabpan on 12/12/19.
// Problem Statement : https://www.codechef.com/DEC19B/problems/SUBSPLAY
//

#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string str;
        cin >> str;
        map<char, vector<int> > mp;
        for (int i = 0; i < n; i++) {
            char val = str[i];
            mp[val].push_back(i);
        }

        int diff = INT_MAX;

        for (auto i : mp) {
            if (i.second.size() > 1) {
                int len = i.second.size();
                for (int j = 1; j < len; j++) {
                    diff = min(diff, (i.second[j] - i.second[j - 1]));
                }
            }
        }

        if (diff == INT_MAX) {
            cout << 0 << endl;
        } else {
            cout << (n - diff) << endl;
        }
    }
}
