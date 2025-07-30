#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, M;
string S, arr="0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M;
    while (N){
        ll x=N%M;
        S+=arr[x];
        N/=M;
    }
    reverse(S.begin(),S.end());
    cout << S;
    return 0;
}