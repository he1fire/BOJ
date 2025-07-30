#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, ans;
vector<string> v;
ll f(string x, string y){
    ll ret=0;
    for (int i=1;i<=min(x.size(),y.size());i++){
        ll chk=1;
        for (int j=0;j<i;j++){
            if (x[x.size()-i+j]!=y[j])
                chk=0;
        }
        if (chk)
            ret=1;
    }
    return ret;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for (int i=0;i<N;i++){
        string a;
        cin >> a;
        v.push_back(a);
    }
    for (int i=0;i<N;i++){
        for (int j=i+1;j<N;j++){
            if (f(v[i],v[j]) || f(v[j],v[i]))
                ans++;
        }
    }
    cout << ans;
    return 0;
}