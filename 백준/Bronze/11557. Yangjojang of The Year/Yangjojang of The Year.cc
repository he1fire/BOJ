#include <bits/stdc++.h>
#define ll long long
using namespace std;
typedef pair<ll, string> pls;
ll N, T;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> T;
    while (T--){
        cin >> N;
        vector<pls> v;
        for (int i=0;i<N;i++){
            string a;
            ll b;
            cin >> a >> b;
            v.push_back({b,a});
        }
        sort(v.begin(),v.end(),greater<pls>());
        cout << v[0].second << "\n";
    }
    return 0;
}