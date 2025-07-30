#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll N, arr[55]={0}, ans[2]={0,}, chk[2]={0,};
    cin >> N;
    for (int i=0;i<N;i++){
        cin >> arr[i];
    }
    for (int i=0;i<N;i++){
        if (arr[i]>chk[0]){
            ans[0]++;
            chk[0]=arr[i];
        }
    }
    for (int i=N-1;i>=0;i--){
        if (arr[i]>chk[1]){
            ans[1]++;
            chk[1]=arr[i];
        }
    }
    cout << ans[0] << "\n" << ans[1];
    return 0;
}