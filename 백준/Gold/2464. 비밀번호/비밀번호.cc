#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, cnt;
string S, mn, mx;
ll f(string x){
    ll ret=0, mul=1;
    reverse(x.begin(),x.end());
    for (ll i=0;i<x.size();i++){
        ret+=(x[i]=='1')*mul;
        mul*=2;
    }
    return ret;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for (ll i=N;i;i/=2)
        S+=i%2+'0';
    reverse(S.begin(),S.end());
    for (ll i=0;i<S.size();i++)
        cnt+=(S[i]=='1');
    if (cnt==S.size()){
        mn="0";
        mx=S+'1';
        mx[1]=0;
    }
    else{
        ll chk=0;
        mn=mx=S;
        for (ll i=mn.size()-1;i>0;i--){
            if (mn[i]=='0' && mn[i-1]=='1'){
                swap(mn[i],mn[i-1]);
                sort(mn.begin()+i,mn.end(),greater<ll>());
                break;
            }
        }
        for (ll i=mx.size()-1;i>0;i--){
            if (mx[i]=='1' && mx[i-1]=='0'){
                swap(mx[i],mx[i-1]);
                sort(mx.begin()+i,mx.end());
                chk=1;
                break;
            }
        }
        if (!chk){
            mx+='0';
            sort(mx.begin()+1,mx.end());
        }
    }
    cout << f(mn) << " " << f(mx);
    return 0;
}