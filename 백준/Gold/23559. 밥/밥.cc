#include <bits/stdc++.h>
#define ll long long
using namespace std;
struct st{
    ll a, b;
    bool operator<(st& tmp){
        return (a-b)<(tmp.a-tmp.b);
    }
};
ll N, M, ans;
vector<st> v;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M;
    for (int i=0;i<N;i++){
        ll a, b;
        cin >> a >> b;
        if (b>=a){
            ans+=b;
            M-=1000;
        }
        else
            v.push_back({a,b});
    }
    sort(v.rbegin(),v.rend());
    for (int i=0;i<v.size();i++){
        if (M>=(v.size()-(i+1))*1000+5000){
            ans+=v[i].a;
            M-=5000;
        }
        else{
            ans+=v[i].b;
            M-=1000;
        }
    }
    cout << ans;
    return 0;
}