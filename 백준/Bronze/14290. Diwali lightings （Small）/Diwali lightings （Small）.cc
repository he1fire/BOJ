#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, arr[105];
string S;
ll f(ll x){
    return (x/S.size())*arr[S.size()]+arr[x%S.size()];
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for (ll i=1;i<=N;i++){
        ll a, b;
        cin >> S >> a >> b;
        for (ll j=1;j<=S.size();j++)
            arr[j]=arr[j-1]+(S[j-1]=='B');
        cout << "Case #" << i << ": " << f(b)-f(a-1) << "\n"; 
    }
    return 0;
}