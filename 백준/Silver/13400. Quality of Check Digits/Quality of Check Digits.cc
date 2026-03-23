#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll arr[15][15], ans;
ll g(string s){
    ll ret=0;
    for (ll i=0;i<s.size();i++)
        ret=arr[ret][s[i]-'0'];
    return ret;
}
ll f(ll x){
    ll ret=0;
    string s=to_string(x);
    reverse(s.begin(),s.end());
    while (s.length()<4)
        s+='0';
    reverse(s.begin(),s.end());
    s+=g(s)+'0';
    for (ll i=0;i<s.size();i++){
        for (ll j=1;j<=9;j++){
            string tmp=s;
            tmp[i]=(tmp[i]-'0'+j)%10+'0';
            if (g(tmp)==0)
                ret++;
        }
    }
    for (ll i=0;i<s.size()-1;i++){
        string tmp=s;
        swap(tmp[i],tmp[i+1]);
        if (s==tmp)
            continue;
        if (g(tmp)==0)
            ret++;
    }
    return ret;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    for (ll i=0;i<10;i++){
        for (ll j=0;j<10;j++)
            cin >> arr[i][j];
    }
    for (ll i=0;i<10000;i++)
        ans+=(f(i)>0);
    cout << ans;
    return 0;
}