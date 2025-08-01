#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, arr[100005], ans, cnt;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for (int i=0;i<2*N;i++){
        ll a;
        cin >> a;
        if (arr[a]==0){
            arr[a]++;
            cnt++;
        }
        else{
            arr[a]--;
            cnt--;
        }
        ans=max(ans,cnt);
    }
    cout << ans;
    return 0;
}