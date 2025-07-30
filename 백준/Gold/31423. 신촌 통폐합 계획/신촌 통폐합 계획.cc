#include <bits/stdc++.h>
#define ll long long
using namespace std;
typedef pair<ll,ll> pll;
ll N;
vector<string> arr;
vector<pll> v;
deque<ll> dq;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for (int i=0;i<N;i++){
        string s;
        cin >> s;
        arr.push_back(s);
        v.push_back({-1,-1});
    }
    for (int i=0;i<N-1;i++){
        ll a, b;
        cin >> a >> b;
        a--, b--;
        if (v[a].second==-1)
            v[b].first=a;
        else
            v[b].first=v[a].second;
        if (v[b].second==-1)
            v[a].second=b;
        else
            v[a].second=v[b].second;
    }
    for (int i=0;i<N;i++){
        if (v[i].first==-1){
            ll curr=v[i].second;
            while (curr!=-1){
                dq.push_front(curr);
                curr=v[curr].first;
            }
        }
    }
    for (auto i:dq)
        cout << arr[i];
    return 0;
}