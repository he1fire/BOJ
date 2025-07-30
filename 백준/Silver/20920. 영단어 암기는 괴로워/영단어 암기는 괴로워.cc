#include <bits/stdc++.h>
#define ll long long
using namespace std;
struct psl{string s;ll x;};
ll N, M;
map<string,ll> m;
vector<psl> v;
ll cmp(psl a, psl b){
    if (a.x!=b.x)
        return a.x>b.x;
    if (a.s.size()!=b.s.size())
        return a.s.size()>b.s.size();
    return a.s<b.s;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M;
    for (int i=0;i<N;i++){
        string s;
        cin >> s;
        if (s.size()>=M)
            m[s]++;
    }
    for (auto i:m)
        v.push_back({i.first,i.second});
    sort(v.begin(),v.end(),cmp);
    for (auto i:v) 
        cout << i.s << "\n";
    return 0;
}