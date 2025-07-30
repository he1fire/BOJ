#include <bits/stdc++.h>
#define ll long long
#define INF 1e9+7
using namespace std;
struct ABC{
    string n;
    ll x, y, z;
    ABC() {}
    ABC(string n, ll x, ll y, ll z) : n(n), x(x), y(y), z(z) {}
};
ll N;
vector<ABC> v;
bool cmp(ABC x, ABC y){
    if (x.x!=y.x)
        return x.x>y.x;
    else if (x.y!=y.y)
        return x.y<y.y;
    else if (x.z!=y.z)
        return x.z>y.z;
    else
        return x.n<y.n;
}
int main(){
    cin >> N;
    for (int i=0;i<N;i++){
        string s;
        ll a, b, c;
        cin >> s >> a >> b >> c;
        v.push_back({s,a,b,c});
    }
    sort(v.begin(), v.end(), cmp);
    for (auto i:v)
        cout << i.n << "\n";
    return 0;
}