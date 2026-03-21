#include <bits/stdc++.h>
#define ll long long
using namespace std;
struct st{
    ll x;
    string s;
    bool operator<(const st& tmp) const {
        if (x%2!=tmp.x%2)
            return x%2>tmp.x%2;
        if (x!=tmp.x)
            return x<tmp.x;
        if (s.size()!=tmp.s.size())
            return s.size()<tmp.s.size();
        return s<tmp.s;
    }
};
ll N, M, arr[15];
vector<st> v;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M;
    while (1){
        ll a;
        string b;
        cin >> a >> b;
        if (!a)
            break;
        if (arr[a]>=M)
            continue;
        arr[a]++;
        v.push_back({a,b});
    }
    sort(v.begin(),v.end());
    for (auto x:v)
        cout << x.x << " " << x.s << "\n";
    return 0;
}