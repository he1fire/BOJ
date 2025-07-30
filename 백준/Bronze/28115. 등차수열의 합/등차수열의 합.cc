#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N;
vector<ll> v;
ll f(){
    if (v.size()==1)
        return 1;
    ll chk=v[1]-v[0];
    for (int i=1;i<N;i++){
        if (v[i]-v[i-1]!=chk)
            return 0;
    }
    return 1;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for (int i=0;i<N;i++){
        ll a;
        cin >> a;
        v.push_back(a);
    }
    if (f()){
        cout << "YES\n";
        for (int i=0;i<N;i++)
            cout << v[i] << " ";
        cout << "\n";
        for (int i=0;i<N;i++)
            cout << "0 ";
    }
    else
        cout << "NO";
    return 0;
}
