#include <bits/stdc++.h>
#define ll long long
using namespace std;
struct st{
    ll a,g,t,c;
    bool operator<(const st& tmp) const {
        if (a!=tmp.a)
            return a<tmp.a;
        else if (g!=tmp.g)
            return g<tmp.g;
        else if (t!=tmp.t)
            return t<tmp.t;
        else
            return c<tmp.c;
    }
};
ll N, M;
st cnt;
string S;
void f(char c, ll x){
    if (c=='A')
        cnt.a+=x;
    if (c=='G')
        cnt.g+=x;
    if (c=='T')
        cnt.t+=x;
    if (c=='C')
        cnt.c+=x;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    while (N--){
        ll mx=0;
        cin >> M >> S;
        map<st,ll> m;
        cnt={0,0,0,0};
        for (int i=0;i<M-1;i++)
            f(S[i],1);
        for (int i=M-1;i<S.size();i++){
            f(S[i],1);
            m[cnt]++;
            f(S[i-M+1],-1);
        }
        for (auto x:m)
            mx=max(mx,x.second);
        cout << mx << "\n";
    }
    return 0;
}