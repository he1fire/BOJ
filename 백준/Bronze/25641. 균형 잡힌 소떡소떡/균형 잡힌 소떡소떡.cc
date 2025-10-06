#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, s, t, ans;
string S;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> S;
    for (int i=N-1;i>=0;i--){
        if (S[i]=='s')
            s++;
        else
            t++;
        if (s==t)
            ans=i;
    }
    for (int i=ans;i<N;i++)
        cout << S[i];
    return 0;
}