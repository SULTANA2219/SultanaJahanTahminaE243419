/*
* Course: Competitive Programming Sessional (CCE-2310)
* Assignment: Codeforces ICPC Assiut University Community
* Problem ID: G
* Author: Sultana Jahan Tahmina (ID:E243419)
* Language/Version: GNU G++20 13.2 (64 bit, winlibs)
* Codeforces Profile: https://codeforces.com/profile/hscsultana22
* Date: 2025-11-22
* Statement: 
https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/G
*/


#include <bits/stdc++.h>
using namespace std;

long long factorial(int n) {
    long long f = 1;
    for (int i = 1; i <= n; i++)
        f *= i;
    return f;
}

int main() {
    int T, N;
    cin >> T;

    while (T--) {
        cin >> N;
        cout << factorial(N) << "\n";
    }

    return 0;
}

