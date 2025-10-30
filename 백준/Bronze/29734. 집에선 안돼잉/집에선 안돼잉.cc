#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, M, T, S;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M >> T >> S;
    ll a=N+(N-1)/8*S, b=M+(M-1)/8*(S+2*T)+T;
    cout << (a<b ? "Zip\n" : "Dok\n") << min(a,b);
    return 0;
}