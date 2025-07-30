#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll T;
int main(){
    cin >> T;
    while (T--){
        ll N, M, arr[505]={0}, ans=0;
        cin >> N >> M;
        for (int i=0;i<N;i++){
            ll a;
            cin >> a;
            arr[a]++;
        }
        for (int i=1;i<=M;i++){
            if (arr[i])
                ans+=arr[i]-1;
        }
        cout << ans << "\n";
    }
    return 0;
}