#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000
using namespace std;
string N;
ll dp[2][5005];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    dp[0][0]=1;
    if (N[0]=='0'){
        cout << "0";
        return 0;
    }
    for (int i=1;i<N.size();i++){
        if (N[i]=='0'){
            if (N[i-1]!='1' && N[i-1]!='2'){
                cout << "0";
                return 0;
            }
            dp[1][i]=dp[0][i-1];
        }
        else if (N[i-1]=='1' || (N[i-1]=='2' && N[i]<='6')){
            dp[0][i]=(dp[0][i-1]+dp[1][i-1])%MOD;
            dp[1][i]=dp[0][i-1];
        }
        else
            dp[0][i]=(dp[0][i-1]+dp[1][i-1])%MOD;
    }
    cout << (dp[0][N.size()-1]+dp[1][N.size()-1])%MOD;
    return 0;
}