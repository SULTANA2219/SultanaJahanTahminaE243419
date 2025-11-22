/*
* Course: Competitive Programming Sessional (CCE-2310)
* Assignment: Codeforces ICPC Assiut University Community
* Problem ID: I
* Author: Sultana Jahan Tahmina (ID:E243419)
* Language/Version: GNU G++20 13.2 (64 bit, winlibs)
* Codeforces Profile: https://codeforces.com/profile/hscsultana22
* Date: 2025-11-22
* Statement: 
https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/I
*/


#include <bits/stdc++.h>
using namespace std;

int main() {
    string N;
    cin >> N;

    string R = N;
    reverse(R.begin(), R.end());

    int i = 0;
    while (i < (int)R.size() - 1 && R[i] == '0') {
        i++;
    }
    string trimmed = R.substr(i);

    cout << trimmed << "\n";

    if (N == R) cout << "YES\n";
    else cout << "NO\n";

    return 0;
}
