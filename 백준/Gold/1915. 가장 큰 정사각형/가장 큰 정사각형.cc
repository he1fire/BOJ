#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, M, arr[1005][1005], ans;
string s[1005];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M;
    for (int i=0;i<N;i++)
        cin >> s[i];
    for (int i=0;i<N;i++){
        for (int j=0;j<M;j++){
            arr[i][j]=s[i][j]-'0';
            if (arr[i][j]==1 && i>0 && j>0)
                arr[i][j]=max(arr[i][j],min({arr[i-1][j-1],arr[i-1][j],arr[i][j-1]})+1);
            ans=max(ans,arr[i][j]);
        }
    }
    cout << ans*ans;
    return 0;
}