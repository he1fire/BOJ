#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, M, arr[25][200005];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for (int i=1;i<=N;i++)
        cin >> arr[1][i];
    for (int i=2;i<=20;i++){
        for (int j=1;j<=N;j++)
            arr[i][j]=arr[i-1][arr[i-1][j]];
    }
    cin >> M;
    while (M--){
        ll a, b;
        cin >> a >> b;
        for (ll i=1, x=1;x<=a;x=1<<i++){
            if (a & x)
                b=arr[i][b];
        }
        cout << b << "\n";
    }
    return 0;
}