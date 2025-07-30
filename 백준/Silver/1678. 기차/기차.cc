#include <bits/stdc++.h>
#define ll long long
using namespace std;
struct xy{string name; ll time;};
ll T, N, M;
vector<xy> v;
ll cmp(xy x, xy y){
    return x.time<y.time;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> T >> M >> N;
    while (T--){
        string s;
        cin >> s;
        while (1){
            ll a;
            cin >> a;
            if (a==-1)
                break;
            a=(a+60-M)%60;
            v.push_back({s,a});
        }
    }
    sort(v.begin(),v.end(),cmp);
    cout << v[(N-1)%v.size()].name;
    return 0;
}