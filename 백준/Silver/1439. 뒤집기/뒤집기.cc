#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll cnt[2]={0,};
    string S;
    cin >> S;
    for (int i=0;i<S.size();i++){
        if (i==0 || S[i]!=S[i-1])
            cnt[S[i]-'0']++;
    }
    cout << min(cnt[0],cnt[1]);
    return 0;
}