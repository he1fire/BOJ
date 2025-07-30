#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, M, ans=0;
ll f(ll x, ll y){
    return 100*y/x>ans;
}
int main(){
    cin >> N >> M;
    ans=100*M/N;
    if (ans==100 || ans==99)
        cout << "-1";
    else{
        ll lo=0, hi=2000000000;
        for (int i=0;i<50;i++){
            ll mid=(lo+hi)/2;
            if (f(N+mid,M+mid))
                hi=mid;
            else
                lo=mid;
        }
        cout << hi;
    }
    return 0;
}