#include <bits/stdc++.h>
#define ll long long
using namespace std;
typedef pair<ll,ll> pll;
ll N, mx, cnt;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for (int i=0;i<N;i++){
        ll a, chk=0;
        cin >> a;
        if (a==0)
            continue;
        cnt++;
        while (a!=1){
            cnt+=a%2;
            a/=2;
            chk++;
        }
        mx=max(mx,chk);
    }
    cout << mx+cnt;
}