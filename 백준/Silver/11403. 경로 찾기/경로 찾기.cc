#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, arr[105][105];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for (ll i=0;i<N;i++){
        for (ll j=0;j<N;j++)
            cin >> arr[i][j];
    }
    for (ll x=0;x<N;x++){
        for (ll i=0;i<N;i++){
            for (ll j=0;j<N;j++){
                if (arr[i][x] && arr[x][j])
                    arr[i][j]=1;
            }
        }
    }
    for (ll i=0;i<N;i++){
        for (ll j=0;j<N;j++)
            cout << arr[i][j] << " ";
        cout << "\n";
    }
    return 0;
}