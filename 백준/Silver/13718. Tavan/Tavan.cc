#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, M, K, X, cnt;
string S, arr[505];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M >> K >> X;
    cin >> S;
    for (ll i=0;i<M;i++){
        cin >> arr[i];
        sort(arr[i].begin(),arr[i].end());
    }
    for (ll i=0;i<N;i++){
        if (S[i]=='#'){
            ll x=X;
            for (ll j=0;j<M-cnt-1;j++)
                x/=K;
            if (cnt+1==M)
                x--;
            cout << arr[cnt][x%K];
            cnt++;
        }
        else
            cout << S[i];
    }
    return 0;
}