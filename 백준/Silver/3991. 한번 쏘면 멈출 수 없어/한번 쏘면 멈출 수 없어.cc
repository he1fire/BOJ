#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, M, K, arr[15][15], cnt;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M >> K;
    for (int i=1;i<=K;i++){
        ll a;
        cin >> a;
        for (int x=cnt;x<cnt+a;x++)
            arr[x/M][x%M]=i;
        cnt+=a;
    }
    for (int i=0;i<N;i++){
        if (i%2){
            for (int j=M-1;j>=0;j--)
                cout << arr[i][j];
        }
        else{
            for (int j=0;j<M;j++)
                cout << arr[i][j];
        }
        cout << "\n";
    }
    return 0;
}