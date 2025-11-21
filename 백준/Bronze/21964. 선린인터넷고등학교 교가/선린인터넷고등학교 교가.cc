#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N;
string S;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> S;
    for (int i=N-5;i<N;i++)
        cout << S[i];
    return 0;
}