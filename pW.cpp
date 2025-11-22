/*
* Course: Competitive Programming Sessional (CCE-2310)
* Assignment: Codeforces ICPC Assiut University Community
* Problem ID: W
* Author: Sultana Jahan Tahmina (ID:E243419)
* Language/Version: GNU G++20 13.2 (64 bit, winlibs)
* Codeforces Profile: https://codeforces.com/profile/hscsultana22
* Date: 2025-11-22
* Statement: 
https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/W
*/


#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    if (!(cin >> N)) return 0;

    // Upper half (1..N)
    for (int i = 1; i <= N; ++i) {
        cout << string(N - i, ' ') << string(2 * i - 1, '*') << "\n";
    }

    // so total rows = 2 * N
    for (int i = N; i >= 1; --i) {
        cout << string(N - i, ' ') << string(2 * i - 1, '*') << "\n";
    }

    return 0;
}

