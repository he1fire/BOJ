#include <bits/stdc++.h>
#define ll long long
using namespace std;
struct st{
    ll x, y;
};
ll N;
queue<st> q;
vector<ll> ans[3];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    while (N--){
        ll a, b, c;
        cin >> a;
        if (a==1){
            cin >> b >> c;
            q.push({b,c});
        }
        else{
            cin >> b;
            st x=q.front();
            q.pop();
            if (x.y==b)
                ans[0].push_back(x.x);
            else
                ans[1].push_back(x.x);
        }
    }
    while (!q.empty()){
        st x=q.front();
        q.pop();
        ans[2].push_back(x.x);
    }
    for (int i=0;i<3;i++){
        if (ans[i].empty())
            cout << "None";
        else{
            sort(ans[i].begin(),ans[i].end());
            for (auto x:ans[i])
                cout << x << " ";
        }
        cout << "\n";
    }
    return 0;
}