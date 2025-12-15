#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, arr[10][10], dp[10][10];
ll f(char x){
    string s="A23456789TJQK";
    for (ll i=0;i<s.size();i++){
        if (x==s[i])
            return i+1;
    }
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for (ll i=0;i<N;i++){
        for (ll j=0;j<N;j++){
            string a;
            cin >> a;
            arr[i][j]=f(a[0]);
        }
    }
    for (ll i=N-1;i>=0;i--){
        for (ll j=0;j<N;j++){
            dp[i][j]+=arr[i][j];
            if (i<N-1 && j>0)
                dp[i][j]+=max(dp[i+1][j],dp[i][j-1]);
            else if (i<N-1)
                dp[i][j]+=dp[i+1][j];
            else if (j>0)
                dp[i][j]+=dp[i][j-1];
        }
    }
    cout << dp[0][N-1];

    return 0;
}