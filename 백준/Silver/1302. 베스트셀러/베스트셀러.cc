#include <bits/stdc++.h>
#define ll long long
#define INF 1e9+7
using namespace std;
ll N, cnt;
map<string,int> m;
string ans;
int main(){
    cin >> N;
    for (int i=0;i<N;i++){
        string s;
        cin >> s;
        m[s]++;
    }
    for (auto i:m){
        if (i.second==cnt)
            ans=min(ans,i.first);
        else if (i.second>cnt){
            cnt=i.second;
            ans=i.first;
        }
    }
    cout << ans;
    return 0;
}