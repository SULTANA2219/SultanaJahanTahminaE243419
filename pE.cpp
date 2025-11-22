/*
* Course: Competitive Programming Sessional (CCE-2310)
* Assignment: Codeforces ICPC Assiut University Community
* Problem ID: E
* Author: Sultana Jahan Tahmina (ID:E243419)
* Language/Version: GNU G++20 13.2 (64 bit, winlibs)
* Codeforces Profile: https://codeforces.com/profile/hscsultana22
* Date: 2025-11-22
* Statement: 
https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/E
*/


#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    int x, max = -1;
    for (int i = 0; i < N; i++) {
        cin >> x;
        if (x > max) max = x;
    }

    cout << max;
    return 0;
}
