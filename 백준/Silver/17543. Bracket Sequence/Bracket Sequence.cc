#include <bits/stdc++.h>
#define ll long long
#define MOD (ll)(1e9+7)
using namespace std;
ll N, sign;
stack<ll> s;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    s.push(0);
    for (ll i=0;i<N;i++){
        string S;
        cin >> S;
        if (S=="("){
            sign^=1;
            if (sign)
                s.push(1);
            else
                s.push(0);
        }
            
        else if (S==")"){
            sign^=1;
            ll a, b;
            a=s.top();
            s.pop();
            b=s.top();
            s.pop();
            if (sign)
                s.push((a*b)%MOD);
            else
                s.push((a+b)%MOD);
        }
        else{
            ll now=stol(S)%MOD, tmp=s.top();
            s.pop();
            if (sign)
                s.push((tmp*now)%MOD);
            else
                s.push((tmp+now)%MOD);
        }
    }
    cout << s.top();
    return 0;
}