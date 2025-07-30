#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, M, arr[1005][1005], ans;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    while (1){
        ans=0;
        fill(&arr[0][0],&arr[1004][1005],0);
        cin >> N >> M;
        if (N+M==0)
            break;
        for (int i=0;i<N;i++){
            for (int j=0;j<M;j++){
                ll a;
                cin >> a;
                if (a==1 && i>0 && j>0)
                    a=max(a,min({arr[i-1][j-1],arr[i-1][j],arr[i][j-1]})+1);
                arr[i][j]=a;
                ans=max(ans,arr[i][j]);
            }
        }
        cout << ans << "\n";
    }
    return 0;
}