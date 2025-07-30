#include <bits/stdc++.h>
#define ll long long
#define INF 987654321
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll N, arr[25][25], ans=INF;
    vector<ll> chk;
    cin >> N;
    for (int i=0;i<N;i++){
        for (int j=0;j<N;j++){
            cin >> arr[i][j];
        }
    }
    for (int i=0;i<N/2;i++){
        chk.push_back(0);
    }
    for (int i=0;i<N/2;i++){
        chk.push_back(1);
    }
    do{
        ll cnt[2]={0,};
        for (int i=0;i<N;i++){
            for (int j=i+1;j<N;j++){
                if (chk[i]==chk[j]){
                    cnt[chk[i]]+=arr[i][j]+arr[j][i];
                }
            }
        }
        ans=min(abs(cnt[0]-cnt[1]),ans);
    }while (next_permutation(chk.begin(),chk.end()));
    cout << ans;
    return 0;
}