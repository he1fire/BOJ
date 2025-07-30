#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, x[105][105], y[105][105], ans1=0, ans2=0;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string S[105];
    cin >> N;
    for (int i=0;i<N;i++)
        cin >> S[i];
    for (int i=0;i<N;i++){
        for (int j=0;j<N;j++){
            if (S[i][j]=='.' && S[i][j+1]=='.' && x[i][j]==0 && j+1<N){
                ll a=j;
                for (;S[i][a]=='.';a++){
                    x[i][a]=1;
                }
                ans1++;
            }
            if (S[i][j]=='.' && S[i+1][j]=='.' && y[i][j]==0 && i+1<N){
                ll a=i;
                for (;S[a][j]=='.';a++){
                    y[a][j]=1;
                }
                ans2++;      
            }
        }
    }
    cout << ans1 << " " << ans2;
    return 0;
}