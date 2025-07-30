#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, arr[15][15];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for (int i=0;i<N;i++){
        for (int j=0;j<N;j++)
            cin >> arr[i][j];
    }
    for (int i=0;i<N;i++){
        ll cnt=0, mx=-1;
        for (int j=0;j<N;j++){
            if (mx<arr[j][i]){
                cnt++;
                mx=arr[j][i];
            }
        }
        cout << cnt << " ";
    }
    for (int i=0;i<N;i++){
        ll cnt=0, mx=-1;
        for (int j=0;j<N;j++){
            if (mx<arr[i][j]){
                cnt++;
                mx=arr[i][j];
            }
        }
        cout << "\n" << cnt;
    }
    return 0;
}