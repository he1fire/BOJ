#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, M, ans, arr[505][505];
int main(){
    cin >> N >> M;
    for (int i=0;i<M;i++){
        ll a;
        cin >> a;
        for (int j=0;j<a;j++)
            arr[i][j]=-1;
    }
    for (int i=0;i<N;i++){
        ll s=-1, e=-1;
        for (int j=0;j<M;j++){
            if (arr[j][i]==-1){
                if (s==-1)
                    s=j;
                e=j;
            }
        }
        for (int j=s+1;j<e;j++){
            if (!arr[j][i])
                ans++;
        }
    }
    cout << ans;
    return 0;
}