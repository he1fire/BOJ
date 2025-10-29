#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N;
map<string,ll> m;
vector<pair<string,ll>> v;
bool cmp(pair<string,ll> a, pair<string,ll> b){
    if (a.second!=b.second)
        return a.second>b.second;
    return a.first<b.first;
}
ll f(string s){
    return ((s[0]-'0')*10+(s[1]-'0'))*60+(s[3]-'0')*10+(s[4]-'0');
}
ll g(ll x){
    if (x<=100)
        return 10;
    return 10+(x-100+49)/50*3;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    while (N--){
        string a, b;
        cin >> a >> b;
        m[b]+=f(a);
    }
    for (auto x:m)
        v.push_back({x.first,g(x.second)});
    sort(v.begin(),v.end(),cmp);
    for (auto x:v)
        cout << x.first << " " << x.second << "\n";
    return 0;
}