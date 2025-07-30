#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll T;
    cin >> T;
    while (T--){
        ll N, M, dir[4][2]={{0,1},{1,0},{0,-1},{-1,0}}, ans=0;
        string S[55];
        cin >> N >> M;
        for (int i=0;i<N;i++)
            cin >> S[i];
        for (int i=0;i<N;i++){
            for (int j=0;j<M;j++){
                ll cnt=0;
                if (S[i][j]!='0'){
                    for (int k=1;k<=S[i][j]-'0';k++){
                        for (int l=0;l<4;l++){
                            ll ax=i+dir[l][0], ay=j+dir[l][1];
                            if (ax<0 || ax>=N || ay<0 || ay>=M || k>S[ax][ay]-'0')
                                cnt++;
                        }
                    }
                    cnt+=2;
                }
                ans+=cnt;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}