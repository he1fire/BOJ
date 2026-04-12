#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll T, N;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> T;
    while (T--){
        cin >> N;
        map<string,ll> m;
        vector<ll> v;
        for (ll i=0;i<N;i++){
            string s;
            ll a;
            cin >> s >> a;
            if (m.find(s)!=m.end())
                m[s]=min(m[s],a);
            else
                m[s]=a;
        }
        for (auto x:m)
            v.push_back(x.second);
        sort(v.begin(),v.end());
        for (auto x:v)
            cout << x << " ";
        cout << "\n";
    }
    return 0;
}