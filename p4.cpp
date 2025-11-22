/*
* Course: Competitive Programming Sessional (CCE-2310)
* Assignment: Codeforces ICPC Assiut University Community
* Problem ID: 4
* Author: Sultana Jahan Tahmina (ID:E243419)
* Language/Version: GNU G++20 13.2 (64 bit, winlibs)
* Codeforces Profile: https://codeforces.com/profile/hscsultana22
* Date: 2025-11-22
* Statement: 
ALL COMMON PATTERN TYPES.pdf/4
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    for(int i = N; i >= 1; i--){
        cout << string(N - i, ' ');
        cout << string(2 * i - 1, '*');
        cout << "\n";
    }
}
