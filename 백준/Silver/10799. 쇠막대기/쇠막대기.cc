#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll ans=0, cnt=0;
    string S;
    cin >> S;
    for (int i=0;i<S.size();i++){
        if (S[i]=='(')
            cnt++;
        if (S[i]==')'){
            cnt--;
            if (S[i-1]=='(')
                ans+=cnt;
            if (S[i-1]==')')
                ans++;
        }
    }
    cout << ans;
    return 0;
}