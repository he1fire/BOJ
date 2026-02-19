#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, M, arr[1005], mx[2], ans[2];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M;
    for (ll i=1;i<=M;i++){
        ll a, b, cnt=0;
        cin >> a >> b;
        if (b-a>mx[0]){
            mx[0]=b-a;
            ans[0]=i;
        }
        for (ll j=a;j<=b;j++){
            if (!arr[j]){
                arr[j]=i;
                cnt++;
            }
        }
        if (cnt>mx[1]){
            mx[1]=cnt;
            ans[1]=i;
        }
    }
    for (auto x:ans)
        cout << x << "\n";
    return 0;
}