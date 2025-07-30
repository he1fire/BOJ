#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    vector<pair<ll,pair<ll,string> > > x;
    ll N, cnt=1;
    cin >> N;
    for (int i=0;i<N;i++){
        ll a;
        string b;
        cin >> a >> b;
        x.push_back(make_pair(a,make_pair(cnt,b)));
        cnt++;
    }
    sort(x.begin(),x.end());
    for (int i=0;i<N;i++)
        cout << x[i].first << " " << x[i].second.second << "\n";
    return 0;
}