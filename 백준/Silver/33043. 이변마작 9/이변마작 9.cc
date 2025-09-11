#include <bits/stdc++.h>
#define ll long long
#define INF 1e9+7
using namespace std;
ll N, ans=INF;
map<string,vector<ll>> m;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for (int i=0;i<N;i++){
        string s;
        cin >> s;
        m[s].push_back(i);
    }
    for (auto v:m){
        if (v.second.size()>=5){
            for (int i=4;i<v.second.size();i++)
                ans=min(ans,v.second[i]-v.second[i-4]+1);
        }
    }
    cout << (ans==INF ? -1 : ans);
    return 0;
}