#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, ans, M;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for (int i=2;i<=N;i++){
        ll cnt=0, x=N;
        while (x){
            cnt+=x%i;
            x/=i;
        }
        if (cnt>ans)
            ans=cnt, M=i;
    }
    cout << ans << " " << M;
    return 0;
}