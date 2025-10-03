#include <bits/stdc++.h>
#define ll long long
using namespace std;
struct st{
    ll idx, x, y;
    bool operator<(st &tmp){
        if (y*tmp.x!=tmp.y*x)
            return y*tmp.x>tmp.y*x;
        else if (x!=tmp.x)
            return x<tmp.x;
        else
            return idx<tmp.idx;
    }
};
ll N, M;
vector<st> v;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M;
    for (int i=0;i<N;i++){
        ll a, b, c;
        cin >> a >> b >> c;
        v.push_back({a,b,c});
    }
    sort(v.begin(),v.end());
    for (int i=0;i<M;i++)
        cout << v[i].idx << "\n";
    return 0;
}