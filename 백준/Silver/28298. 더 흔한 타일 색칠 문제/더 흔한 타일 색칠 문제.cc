#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, M, K, ans;
string S[505];
int arr[505][505][30];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M >> K;
    for (int i=0;i<N;i++){
        cin >> S[i];
    }
    for (int x=0;x<K;x++){
        for (int y=0;y<K;y++){
            for (int i=0;i<N;i+=K){
                for (int j=0;j<M;j+=K){
                    arr[x][y][S[i+x][j+y]-'A']++;
                }
            }
        }
    }
    for (int x=0;x<K;x++){
        for (int y=0;y<K;y++){
            ll cnt=0, idx=0;
            for (int k=0;k<30;k++){
                if (cnt<arr[x][y][k]){
                    cnt=arr[x][y][k];
                    idx=k;
                }
            }
            ans+=(N/K)*(M/K)-cnt;
            for (int i=0;i<N;i+=K){
                for (int j=0;j<M;j+=K){
                    S[i+x][j+y]='A'+idx;
                }
            }
        }
    }
    cout << ans << "\n";
    for (int i=0;i<N;i++)
        cout << S[i] << "\n";
    return 0;
}