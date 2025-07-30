#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, ans=1;
vector<ll> v1, v2;
ll gcd(ll a, ll b){
    return a ? gcd(b%a,a) : b;
}
ll f(ll x){
    ll lo=1, hi=x+1;
    while (lo+1<hi){
        ll mid=(lo+hi)/2;
        if (mid>=1e9+1)
            hi=mid;
        else if (mid*mid<=x)
            lo=mid;
        else
            hi=mid;
    }
    return (lo*lo!=x);
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for (int i=0;i<N;i++){
        ll a;
        cin >> a;
        v1.push_back(a);
        v2.push_back(a);
    }
    sort(v2.begin(),v2.end());
    for (int i=0;i<N;i++){
        if (v1[i]!=v2[i] && (f(v1[i]/gcd(v1[i],v2[i])) || f(v2[i]/gcd(v1[i],v2[i])))){
            ans=0;
            break;
        }
    }
    cout << (ans ? "YES" : "NO");
    return 0;
} 