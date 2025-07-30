#include <bits/stdc++.h>
#define ll long long
using namespace std;
typedef pair<ll,ll> pll;
struct ABC{
    ll a, b, c;
    ABC() {}
    ABC(ll a, ll b, ll c): a(a), b(b), c(c) {}
};
ll N, M;
vector<pll> v;
vector<ABC> ans;
ll CCW(pll a, pll b, pll c){
    return a.first*(b.second-c.second)+b.first*(c.second-a.second)+c.first*(a.second-b.second);
}
ll f(pll a, pll b){
    return (a.first-b.first)*(a.first-b.first)+(a.second-b.second)*(a.second-b.second);
}
void triangle(pll a, pll b, pll c){
    if (CCW(a,b,c)==0)
        return;
    ll len[3]={f(a,b), f(b,c), f(a,c)}, chk=1;
    sort(len,len+3);
    for (int i=0;i<ans.size();i++){
        if (len[0]==ans[i].a && len[1]==ans[i].b && len[2]==ans[i].c)
            chk=0;
    }
    if (chk)
        ans.push_back({len[0],len[1],len[2]});
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M;
    for (int i=0;i<=N;i++){
        for (int j=0;j<=M;j++)
            v.push_back({i,j});
    }
    for (int i=0;i<v.size();i++){
        for (int j=i+1;j<v.size();j++){
            for (int k=j+1;k<v.size();k++)
                triangle(v[i],v[j],v[k]);
        }
    }
    cout << ans.size();
    return 0;
}