#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, arr[1005][1005], idx[1005];
int main(){
    cin >> N;
    for (int i=1;i<=N;i++){
        ll a, b, c, d;
        cin >> a >> b >> c >> d;
        for (int j=0;j<c;j++){
            for (int k=0;k<d;k++)
                arr[a+j][b+k]=i;
        }
    }
    for (int i=0;i<1005;i++){
        for (int j=0;j<1005;j++)
            idx[arr[i][j]]++;
    }
    for (int i=1;i<=N;i++)
        cout << idx[i] << "\n";
    return 0;
}