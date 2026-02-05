#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, M, ans, mx=-1;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M;
    for (ll i=0;i<N;i++){
        ll a;
        cin >> a;
        if (mx<a)
            mx=a;
        else{
            if (mx<a+M){
                mx=a+M;
                ans++;
            }
            else{
                cout << "-1";
                return 0;
            }
        }
    }
    cout << ans;
    return 0;
}