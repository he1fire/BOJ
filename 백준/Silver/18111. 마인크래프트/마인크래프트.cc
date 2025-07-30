#include <bits/stdc++.h>
#define ll long long
#define INF 987654321
using namespace std;
ll N, M, B;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll arr[505][505]={0,}, height=0, ans=INF;
    cin >> N >> M >> B;
    for (ll i=0;i<N;i++){
        for (ll j=0;j<M;j++){
            cin >> arr[i][j];
        }
    }
    for (int i=0;i<=256;i++){
        ll sec=0, block=0;
        for (ll a=0;a<N;a++){
            for (ll b=0;b<M;b++){
                if (arr[a][b]>i){
                    sec+=(arr[a][b]-i)*2;
                    block+=arr[a][b]-i;
                }
                else{
                    sec+=i-arr[a][b];
                    block-=i-arr[a][b];
                }
            }
        }
        if (block+B>=0){
            if (sec<=ans){
                ans=sec;
                height=i;
            }
        }
    }
    cout << ans << " " << height;
    return 0;
}