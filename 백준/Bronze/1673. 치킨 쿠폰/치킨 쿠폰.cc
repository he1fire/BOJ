#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll N, M;
    while (cin >> N >> M){
        ll ans=N;
        while (N>=M){
            ans+=N/M;
            N=N/M+N%M;
        }
        cout << ans << "\n";
    }
    return 0;
}