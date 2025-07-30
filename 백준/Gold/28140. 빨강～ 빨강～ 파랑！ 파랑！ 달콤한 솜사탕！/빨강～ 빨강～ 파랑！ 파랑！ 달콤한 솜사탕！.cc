#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, M, ans[4];
string S;
vector<ll> R, B;
ll f(ll a, ll b){
    fill(&ans[0],&ans[3],0);
    if (R.size()<2 || B.size()<2)
        return 0;
    auto x=lower_bound(R.begin(),R.end(),a);
    if (x>=R.end()-1)
        return 0;
    ans[0]=*x;
    ans[1]=*(x+1);
    auto y=upper_bound(B.begin(),B.end(),ans[1]);
    if (y>=B.end()-1)
        return 0;
    ans[2]=*y;
    ans[3]=*(y+1);
    if (ans[3]>b)
        return 0;
    return 1;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M >> S;
    for (int i=0;i<S.size();i++){
        if (S[i]=='R')
            R.push_back(i);
        if (S[i]=='B')
            B.push_back(i);
    }
    while (M--){
        ll a, b;
        cin >> a >> b;
        if (f(a, b)){
            for (int i=0;i<4;i++)
                cout << ans[i] << " ";
            cout << "\n";
        }
        else
            cout << "-1\n";
    }
    return 0;
}