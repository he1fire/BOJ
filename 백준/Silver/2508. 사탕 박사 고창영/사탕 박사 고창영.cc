#include <bits/stdc++.h>
#define ll long long
#define INF 1e9
using namespace std;
ll T, N, M;
string arr[405];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> T;
    while (T--){
        ll ans=0;
        cin >> N >> M;
        for (int i=0;i<N;i++)
            cin >> arr[i];
        for (int i=0;i<N;i++){
            for (int j=0;j<M;j++){
                if (arr[i][j]=='o'){
                    if (0<=i-1 && i+1<N && arr[i-1][j]=='v' && arr[i+1][j]=='^')
                        ans++;
                    if (0<=j-1 && j+1<M && arr[i][j-1]=='>' && arr[i][j+1]=='<')
                        ans++;
                }
            }
        }
        cout << ans << "\n";
    }
    return 0;
}