#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll T, ans;
map<string, priority_queue<ll>> m;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> T;
    while (T--){
        string S;
        ll N, M;
        cin >> N >> S >> M;
        if (N==1){
            while (M--){
                ll a;
                cin >> a;
                m[S].push(a);
            }
        }
        else{
            if (m.find(S)==m.end())
                continue;
            while (M--){
                if (m[S].empty())
                    break;
                ans+=m[S].top();
                m[S].pop();
            }
        }
    }
    cout << ans;
    return 0;
}