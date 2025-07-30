#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll N, M, ans=0;
    string S;
    cin >> N >> M >> S;
    for (int i=0;i<M;i++){
        if (S[i]=='I'){
            ll cnt=0;
            while (S[i+1]=='O' && S[i+2]=='I'){
                cnt++;
                i+=2;
            }
            if (cnt>=N)
                ans+=cnt-N+1;
        }
    }
    cout << ans;
    return 0;
}