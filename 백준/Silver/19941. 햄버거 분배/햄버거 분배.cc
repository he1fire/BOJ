#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, M, ans;
string S;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M >> S;
    for (ll i=0;i<N;i++){
        if (S[i]=='P'){
            for (ll j=i-M;j<=i+M;j++){
                if (j<0 || j>=N)
                    continue;
                if (S[j]=='H'){
                    S[j]='.';
                    ans++;
                    break;
                }
            }
        }
    }
    cout << ans;
    return 0;
}