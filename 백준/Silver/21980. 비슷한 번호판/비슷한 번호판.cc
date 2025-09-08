#include <bits/stdc++.h>
#define ll long long
#define sl pair<string, ll>
using namespace std;
ll T, N, M;
map<sl, ll> m;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> T;
    while (T--){
        ll ans=0;
        m.clear();
        cin >> N >> M;
        while (N--){
            string s;
            ll cnt=0;
            cin >> s;
            for (int i=0;i<s.size();i++){
                if ('A'<=s[i] && s[i]<='Z'){
                    cnt++;
                    s[i]-='A'-'a';
                }
            }
            sort(s.begin(),s.end());
            m[{s,cnt}]++;
        }
        for (auto x:m)
            ans+=x.second*(x.second-1)/2;
        cout << ans << "\n";
    }
    return 0;
}