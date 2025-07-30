#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll T;
    cin >> T;
    while (T--){
        ll N=0, M=0, ans=0, arr[105][105], chk[105][105];
        fill(&arr[0][0],&arr[104][105],0);
        fill(&chk[0][0],&chk[104][105],0);
        cin >> N >> M;
        for (int i=0;i<N;i++){
            for (int j=0;j<M;j++){
                cin >> arr[i][j];
            }
        }
        for (int i=N-1;i>=0;i--){
            for (int j=0;j<M;j++){
                chk[i][j]=arr[i+1][j]+chk[i+1][j];
            }
        }
        for (int i=0;i<N;i++){
            for (int j=0;j<M;j++){
                if (arr[i][j]==1)
                    ans+=(N-i-1)-chk[i][j];
            }
        }
        cout << ans << "\n";
    }
    return 0;
}