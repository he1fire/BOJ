#include <bits/stdc++.h>
#define ll long long
using namespace std;
typedef pair<ll,ll> pll;
ll N, M, K, ans;
deque<pll> dq1, dq2;
bool cmp(pll x, pll y){
    return x.first>y.first;
}
ll f(){
    ll ret=0;
    sort(dq1.begin(),dq1.end(),cmp);
    sort(dq2.begin(),dq2.end(),cmp);
    while (!dq1.empty()){
        ll x=M;
        ret+=dq1[0].first*2;
        while (x && !dq1.empty()){
            if (x>=dq1[0].second){
                x-=dq1[0].second;
                dq1.pop_front();
            }
            else{
                dq1[0].second-=x;
                x=0;
            }
        }
    }
    while (!dq2.empty()){
        ll x=M;
        ret+=dq2[0].first*2;
        while (x && !dq2.empty()){
            if (x>=dq2[0].second){
                x-=dq2[0].second;
                dq2.pop_front();
            }
            else{
                dq2[0].second-=x;
                x=0;
            }
        }
    }
    return ret;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M >> K;
    for (int i=0;i<N;i++){
        ll a, b;
        cin >> a >> b;
        if (a>K)
            dq1.push_back({a-K,b});
        else
            dq2.push_back({K-a,b});
    }
    cout << f();
    return 0;
}