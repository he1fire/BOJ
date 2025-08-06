#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, visited[500005];
string S, ans;
vector<ll> arr[500005];
void BFS(){
    vector<ll> v;
    v.push_back(0);
    while (!v.empty()){
        vector<ll> tmp(v);
        v.clear();
        char c='a';
        ans+=S[tmp[0]];
        for (auto x:tmp){
            visited[x]=1;
            for (auto dx:arr[x]){
                if (visited[dx])
                    continue;
                c=max(c,S[dx]);
            }
        }
        for (auto x:tmp){
            for (auto dx:arr[x]){
                if (visited[dx])
                    continue;
                if (c==S[dx])
                    v.push_back(dx);
            }
        }
    }
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> S;
    for (int i=0;i<N-1;i++){
        ll a, b;
        cin >> a >> b;
        arr[a-1].push_back(b-1);
        arr[b-1].push_back(a-1);
    }
    BFS();
    cout << ans;
    return 0;
}