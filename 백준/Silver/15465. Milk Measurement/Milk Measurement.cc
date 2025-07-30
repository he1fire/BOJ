#include <bits/stdc++.h>
#define ll long long
using namespace std;
typedef pair<ll,ll> pll;
ll N, ans, now=7, cnt[3]={7,7,7};
pll arr[105];
ll f(string s){
    if (s=="Bessie")
        return 0;
    else if (s=="Elsie")
        return 1;
    else
        return 2;
}
void g(){
    ll tmp=0;
    for (int i=0;i<3;i++){
        if (cnt[i]>=cnt[(i+1)%3] && cnt[i]>=cnt[(i+2)%3])
            tmp+=(1<<(i));
    }
    if (tmp!=now){
        ans++;
        now=tmp;
    }
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for (int i=0;i<N;i++){
        ll a, c;
        string b;
        cin >> a >> b >> c;
        arr[a]={f(b),c};
    }
    for (int i=0;i<=100;i++){
        if (arr[i].second){
            cnt[arr[i].first]+=arr[i].second;
            g();
        }
    }
    cout << ans;
    return 0;
}