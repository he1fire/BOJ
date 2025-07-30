#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, M, chk[55], cnt;
vector<ll> arr[2], ans[55];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for (int i=0;i<N;i++){
        ll a;
        cin >> a;
        arr[0].push_back(a);
        arr[1].push_back(a);
    }
    reverse(arr[1].begin(),arr[1].end());
    for (int i=0;i<N;i++){
        if (arr[1][i]==1 || arr[1][i]==3)
            arr[1][i]=4-arr[1][i];
        else
            arr[1][i]=6-arr[1][i];
    } 
    cin >> M;
    for (int i=0;i<M;i++){
        for (int j=0;j<N;j++){
            ll a;
            cin >> a;
            ans[i].push_back(a);
        }
        for (int j=0;j<N;j++){
            ll tmp[2]={1,1};
            for (int k=0;k<N;k++){
                if (arr[0][k]!=ans[i][(k+j)%N])
                    tmp[0]=0;
                if (arr[1][k]!=ans[i][(k+j)%N])
                    tmp[1]=0;
            }
            if (tmp[0] || tmp[1]){
                cnt++;
                chk[i]=1;
            }
        }
    }
    cout << cnt << "\n";
    for (int i=0;i<M;i++){
        if (chk[i]){
            for (int j=0;j<N;j++)
                cout << ans[i][j] << " ";
            cout << "\n";
        }
    }
    return 0;
}