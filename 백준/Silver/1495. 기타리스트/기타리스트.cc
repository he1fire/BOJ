#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, M, T, arr[105][1005], ans=-1;
int main(){
    fill(&arr[0][0],&arr[104][1005],-1);
    cin >> N >> M >> T;
    arr[0][M]=1;
    for (int i=1;i<=N;i++){
        ll a;
        cin >> a;
        for (int j=0;j<=T;j++){
            if (arr[i-1][j]!=-1){
                if (j-a>=0)
                    arr[i][j-a]=1;
                if (j+a<=T)
                    arr[i][j+a]=1;
            }
        }
    }
    for (int i=0;i<=T;i++){
        if (arr[N][i]!=-1)
            ans=i;
    }
    cout << ans;
    return 0;
}