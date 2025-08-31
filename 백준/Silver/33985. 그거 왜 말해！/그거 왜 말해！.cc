#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N;
string S;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> S;
    if (S[0]=='A' && S[S.size()-1]=='B')
        cout << "Yes";
    else
        cout << "No";
    return 0;
}