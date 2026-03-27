#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll T, N;
vector<string> v;
ll cmp(string x, string y){
    ll len=min(x.size(), y.size());
    for (ll i=0;i<len;i++){
        if (x[i]!=y[i]){
            if (x[i]=='-' || y[i]=='-')
                return (y[i]=='-');
            if (abs(x[i]-y[i])!=32){
                if (x[i]>='a')
                    x[i]-=32;
                if (y[i]>='a')
                    y[i]-=32;
            }
            return (x[i]<y[i]);
        }
    }
    return (len==x.size());
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> T;
    while (T--){
        cin >> N;
        v.clear();
        for (ll i=0, a;i<N;i++){
            string s;
            cin >> s;
            v.push_back(s);
        }
        sort(v.begin(),v.end(),cmp);
        for (auto x:v)
            cout << x << "\n";
    }
    return 0;
}