#include <bits/stdc++.h>
#define ll long long
using namespace std;
typedef pair<ll,ll> pll;
ll N, M;
vector<pll> ans;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M;
    for (int i=0;i<N;i++){
        for (int j=0;j<M;j++){
            ll a;
            cin >> a;
            if (a==1){
                ll chk=1;
                for (int k=0;k<ans.size();k++){
                    if (ans[k].first<=i && ans[k].second<=j){
                        ans[k].first=i;
                        ans[k].second=j;
                        chk=0;
                        break;
                    }
                }
                if (chk)
                    ans.push_back({i,j});
            }
        }
    }
    cout << ans.size();
}