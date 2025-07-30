#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll T, N, ans;
vector<string> v;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> T;
    while (T--){
        ans=1;
        v.clear();
        cin >> N;
        for (int i=0;i<N;i++){
            string a;
            cin >> a;
            v.push_back(a);
        }
        sort(v.begin(),v.end());
        for (int i=0;i<N-1;i++){
            if (v[i].size()>v[i+1].size())
                continue;
            if (v[i+1].find(v[i])==0)
                ans=0;
        }
        cout << (ans ? "YES\n" : "NO\n");
    }
    return 0;
}