#include <bits/stdc++.h>
#define ll long long
using namespace std;
struct AB{
    string s;
    ll x;
};
ll N, x[15][15], y[15][15], ans;
map<string, priority_queue<ll>> m;
vector<AB> arr;
vector<ll> v;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for (int i=0;i<10;i++){
        for (int j=0;j<10;j++)
            cin >> x[i][j];
    }
    for (int i=0;i<12;i++){
        for (int j=0;j<12;j++)
            cin >> y[i][j];
    }
    while (N--){
        string a;
        ll b;
        cin >> b >> a;
        m[a].push(-b);
        if (m[a].size()>3)
            m[a].pop();
    }
    for (auto i:m){
        while (!i.second.empty()){
            ll a=i.second.top();
            i.second.pop();
            arr.push_back({i.first, -a});
        }
    }
    for (int i=0;i<arr.size()-3;i++)
        v.push_back(0);
    for (int i=0;i<3;i++)
        v.push_back(1);
    do{
        ll idx=0, cnt=0;
        AB ab[3];
        for (int i=0;i<v.size();i++){
            if (v[i])
                ab[idx++]=arr[i];
        }
        for (int i=0;i<3;i++){
            for (int j=i+1;j<3;j++)
                cnt+=x[ab[i].s[0]-'0'][ab[j].s[0]-'0']+y[ab[i].s[1]-'A'][ab[j].s[1]-'A'];
            cnt+=ab[i].x;
        }
        ans=max(ans,cnt);
    }while (next_permutation(v.begin(),v.end()));
    cout << ans;
    return 0;
}