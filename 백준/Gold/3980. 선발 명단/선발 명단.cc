#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll T, arr[15][15], visited[15];
ll backtrack(ll stat, ll depth){
    ll ret=0;
    if (depth==11)
        return stat;
    for (int i=0;i<11;i++){
        if (visited[i]==0 && arr[i][depth]!=0){
            visited[i]=1;
            ret=max(ret,backtrack(stat+arr[i][depth], depth+1));
            visited[i]=0;
        }
    }
    return ret;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> T;
    while (T--){
        for (int i=0;i<11;i++){
            for (int j=0;j<11;j++){
                cin >> arr[i][j];
            }
        }
        cout << backtrack(0,0) << "\n";
    }
    return 0;
}