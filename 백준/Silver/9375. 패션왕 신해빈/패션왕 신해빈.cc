#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N;
map<string,ll> m;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    while (N--){
        m.clear();
        ll M, ans=1;
        cin >> M;
        for (int i=0;i<M;i++){
            string a, b;
            cin >> a >> b;
            m[b]++;
        }
        for (auto i:m)
            ans*=i.second+1;
        cout << ans-1 << "\n";
    }
    return 0;
}