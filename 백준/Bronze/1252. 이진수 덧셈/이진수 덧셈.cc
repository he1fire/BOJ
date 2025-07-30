#include <bits/stdc++.h>
#define ll long long
using namespace std;
string S[2], ans;
ll mn, mx;
int main(){
    cin >> S[0] >> S[1];
    for (int i=0;i<2;i++)
        reverse(S[i].begin(),S[i].end());
    mn=min(S[0].size(),S[1].size());
    mx=max(S[0].size(),S[1].size());
    ll tmp=0;
    for (int i=0;i<mx;i++){
        ll x=tmp;
        if (i<mn)
            x+=S[0][i]+S[1][i]-'0'*2;
        else if (S[0].size()>S[1].size())
            x+=S[0][i]-'0';
        else
            x+=S[1][i]-'0';
        ans+='0'+x%2;
        tmp=x/2;
    }
    if (tmp)
        ans+='1';
    reverse(ans.begin(),ans.end());
    ll chk=0;
    for (int i=0;i<ans.size();i++){
        if (chk || ans[i]=='1'){
            chk=1;
            cout << ans[i];
        }
    }
    if (!chk)
        cout << "0";
    return 0;
}