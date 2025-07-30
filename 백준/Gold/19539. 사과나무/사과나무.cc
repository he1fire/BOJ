#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, M;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll cnt=0, x=0, y=0;
    cin >> N;
    for (ll i=0;i<N;i++){
        ll a;
        cin >> a;
        x+=a%2;
        y+=a/2;
    }
    y-=x;
    if(y>=0 && y%3==0)
        printf("YES");
    else
        printf("NO");
    return 0;
}