#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, ans=1, chk[100], dp[100];
string S;
vector<ll> v;
void f(){
    ll x=0;
    for (int i=3;i<S.size();i++){
        if (S[i-3]=='l' && S[i-2]=='o' && S[i-1]=='n' && S[i]=='g'){
            chk[i]=1;
            if (i-4>=0 && chk[i-4])
                x++;
            else{
                if (x)
                    v.push_back(x);
                x=1;
            }
        }
    }
    if (x)
        v.push_back(x);
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> S;
    f();
    dp[1]=1;
    dp[2]=2;
    for (int i=3;i<=80;i++)
        dp[i]=dp[i-1]+dp[i-2];
    for (int i=0;i<v.size();i++)
        ans*=dp[v[i]];
    cout << ans;
    return 0;
}