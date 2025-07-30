#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, M, ans;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M;
    for (int i=0;i<N;i++){
        ll a, b, c;
        cin >> a >> b;
        if (abs(a-b)>M){
            cin >> c;
            ans+=c;
        }
        else
            ans+=max(a,b);
    }
    cout << ans;
    return 0;
}