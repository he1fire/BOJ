#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, st, ed, arr[100], chk;
vector<ll> v[100], ans;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> st >> ed;
    for (int i=1; i<=N;i++){
        ll a;
        cin >> a;
        if ((ed|a) != ed)
            continue;
        for (int j=0;a;j++){
            if (a%2)
                v[j].push_back(i);
            a/=2;
        }
    }
    if (st>ed)
        chk=1;
    for (int i=0;ed;i++){ 
        if (ed%2==0 && st%2)
            chk=1;
        else if (ed%2 && st%2==0){
            if (v[i].empty())
                chk=1;
            else
                ans.push_back(v[i][0]);
        }
        st/=2;
        ed/=2;
            
    }
    if (chk)
        cout << "-1"; 
    else{
        ans.erase(unique(ans.begin(),ans.end()),ans.end());
        cout << ans.size() << "\n";
        for (int i=0;i<ans.size();i++)
            cout << ans[i] << " ";
    }
    // for (int i=0;i<10;i++){
    //     cout << i << ": ";
    //     for (int j=0;j<v[i].size();j++)
    //         cout << v[i][j] << " ";
    //     cout << "\n";
    // }
    return 0;
}