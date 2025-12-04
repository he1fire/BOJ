#include <bits/stdc++.h>
#define ll long long
using namespace std;
struct st{
    string idx;
    ll cnt;
};
ll N;
string ans;
queue<st> q;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for (ll i=0;i<N;i++){
        string a;
        ll b;
        cin >> a >> b;
        q.push({a,b});
    }
    while (!q.empty()){
        st x=q.front();
        q.pop();
        if (q.empty()){
            ans=x.idx;
            break;
        }
        while (x.cnt--){
            st dx=q.front();
            q.pop();
            if (!x.cnt)
                break;
            q.push(dx);
        }
    }
    cout << ans;
    return 0;
}