#include <bits/stdc++.h>
#define ll long long
using namespace std;
map<string,int> x;
vector<string> ans;
ll N, M;
int main(){
    cin >> N >> M;
    for (int i=0;i<N+M;i++){
        string a;
        cin >> a;
        x[a]++;
    }
    for (auto i:x){
        if (i.second==2)
            ans.push_back(i.first);
    }
    cout << ans.size() << "\n";
    sort(ans.begin(),ans.end());
    for (auto i:ans)
        cout << i << "\n";
    return 0;
}