#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, M;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for (int i=1;i<=N;i++){
        cin >> M;
        vector<ll> v;
        queue<ll> q;
        for (ll j=0, a;j<M*2;j++){
            cin >> a;
            if (!q.empty() && q.front()==a)
                q.pop();
            else{
                v.push_back(a);
                q.push(a/3*4);
            }
        }
        cout << "Case #" << i << ": ";
        for (auto x:v)
            cout << x << " ";
        cout << "\n";
    }
    return 0;
}