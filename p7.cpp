/*
* Course: Competitive Programming Sessional (CCE-2310)
* Assignment: Codeforces ICPC Assiut University Community
* Problem ID: 7
* Author: Sultana Jahan Tahmina (ID:E243419)
* Language/Version: GNU G++20 13.2 (64 bit, winlibs)
* Codeforces Profile: https://codeforces.com/profile/hscsultana22
* Date: 2025-11-22
* Statement: 
ALL COMMON PATTERN TYPES.pdf/7
*/


#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    for(int i = 1; i <= N; i++){
        cout << string(N - i, ' ');
        for(int j = 1; j <= i; j++)
            cout << j;
        for(int j = i - 1; j >= 1; j--)
            cout << j;
        cout << "\n";
    }
}
