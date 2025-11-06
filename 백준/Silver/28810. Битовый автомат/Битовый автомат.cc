#include <bits/stdc++.h>
#define ll unsigned long long
using namespace std;
ll N, M, mn, mx;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M;
    mn=mx=M;
    for (ll i=0,x=1;i<N;i++,x<<=1){
        if ((M&x)==x)
            mn=min(mn,M-x);
        else
            mx=max(mx,M+x);
    }
    cout << mn << " " << mx;
    return 0;
}