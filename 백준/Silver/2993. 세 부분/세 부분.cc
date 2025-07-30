#include <bits/stdc++.h>
#define ll long long
#define INF (1e9+7)
using namespace std;
string S, ans;
string f(ll x, ll y, ll z){
    string ret=S;
    reverse(ret.begin(),ret.begin()+x+1);
    reverse(ret.begin()+x+1,ret.begin()+y+1);
    reverse(ret.begin()+y+1,ret.end());
    return ret;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> S;
    for (int i=0;i<55;i++)
        ans+='z';
    for (int i=0;i<S.size()-2;i++){
        for (int j=i+1;j<S.size()-1;j++){
            for (int k=j+1;k<S.size();k++)
                ans=min(ans,f(i,j,k));
        }
    }
    cout << ans;
}