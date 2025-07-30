#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000
using namespace std;
ll N, ans, arr[1005][3][2];// 일 결 지
int main(){
    cin >> N;
    arr[1][0][0]=arr[1][1][0]=arr[1][0][1]=1;
    for (int i=2;i<=N;i++){
        arr[i][0][0]=(arr[i-1][0][0]+arr[i-1][1][0]+arr[i-1][2][0])%MOD;
        arr[i][1][0]=arr[i-1][0][0];
        arr[i][2][0]=arr[i-1][1][0];
        arr[i][0][1]=(arr[i-1][0][0]+arr[i-1][1][0]+arr[i-1][2][0]+arr[i-1][0][1]+arr[i-1][1][1]+arr[i-1][2][1])%MOD;
        arr[i][1][1]=arr[i-1][0][1];
        arr[i][2][1]=arr[i-1][1][1];
    }
    for (int i=0;i<6;i++){
        ans=(ans+arr[N][i/2][i%2])%MOD;
    }
    cout << ans;
    return 0;
}