#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, M, visited[15];
set<string> s;
vector<string> v;
void backtrack(ll x, string y){
    if (!x){
        s.insert(y);
        return;
    }
    for (ll i=0;i<N;i++){
        if (!visited[i]){
            visited[i]=1;
            backtrack(x-1,y+v[i]);
            visited[i]=0;
        }
    }
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M;
    for (ll i=0;i<N;i++){
        v.emplace_back();
        cin >> v.back();
    }
    backtrack(M,"");
    cout << s.size();
    return 0;
}