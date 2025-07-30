#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, M, ans=0, now=1;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M >> N;
    while (N--){
        ll a;
        cin >> a;
        if (a<now){
            ans+=now-a;
            now=a;
        }
        if (now+M-1<a){
            ans+=a-(now+M-1);
            now=a-M+1;
        }
    }
    cout << ans;
    return 0;
}