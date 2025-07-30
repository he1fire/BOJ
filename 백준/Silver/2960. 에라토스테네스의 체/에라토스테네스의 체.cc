#include <bits/stdc++.h>
#define ll long long
using namespace std;
int N, M, ans, cnt, arr[1005];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M;
    arr[0]=1;
    arr[1]=1;
    for (int i=2;i<=N;i++){
        if (arr[i]==0){
            ans=i;
            cnt++;
            arr[i]=1;
            for (int j=i*i;j<=N;j+=i){
                if (arr[j]==0){
                    ans=j;
                    cnt++;
                    arr[j]=1;
                }
                if (cnt==M)
                    break;
            }
        }
        if (cnt==M)
            break;
    }
    cout << ans;
    return 0;
}
