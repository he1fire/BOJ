#include <bits/stdc++.h>
#define ll long long
using namespace std;
typedef pair<ll,ll> pll;
ll chk[5][15], suit[5], num[15], mx=-1;
pll ans;
ll chksuit(ll x){
    ll ret=0;
    for (int i=0;i<=3;i++){
        if (suit[i]==x)
            ret++;
    }
    return ret;
}
ll chknum(ll x){
    ll ret=0;
    for (int i=1;i<=13;i++){
        if (num[i]==x)
            ret++;
    }
    return ret;
}
ll straight(){
    for (int i=5;i<=13;i++){
        if (num[i] && num[i-1] && num[i-2] && num[i-3] && num[i-4])
            return 1;
    }
    return 0;
}
ll f(){
    if (straight() && chksuit(5))
        return 8;
    else if (chknum(4))
        return 7;
    else if (chknum(3) && chknum(2))
        return 6;
    else if (chksuit(5))
        return 5;
    else if (straight())
        return 4;
    else if (chknum(3))
        return 3;
    else if (chknum(2)==2)
        return 2;
    else if (chknum(2))
        return 1;
    else
        return 0;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    for (int i=0;i<4;i++){
        ll a, b;
        cin >> a >> b;
        chk[a][b]=1;
        suit[a]++;
        num[b]++;
    }
    for (int i=0;i<=3;i++){
        for (int j=1;j<=13;j++){
            if (chk[i][j])
                continue;
            suit[i]++;  
            num[j]++;
            if (mx<f()){
                mx=f();
                ans={i,j};
            }
            suit[i]--;
            num[j]--;
        }
    }
    cout << ans.first << " " << ans.second;
    return 0;
}