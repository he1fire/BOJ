#include <bits/stdc++.h>
#define ll long long
using namespace std;
struct st{
    ll a, b, c;
    bool operator<(st &tmp){
        if (a!=tmp.a)
            return a>tmp.a;
        return b>tmp.b;
    }
};
ll N;
vector<st> v;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    vector<st> arr(N);
    for (ll i=0;i<N;i++){
        ll a;
        cin >> a;
        arr[i].a+=N-i;
        arr[i].c=a;
    }
    for (ll i=0;i<N;i++){
        ll a;
        cin >> a;
        v.push_back({a,i+1,0});
    }
    sort(v.begin(),v.end());
    for (ll i=0;i<N;i++){
        for (ll j=0;j<N;j++){
            if (arr[j].c!=v[i].b)
                continue;
            arr[j].a+=N-i;
            arr[j].b=N-i;
        }
    }
    sort(arr.begin(),arr.end());
    for (ll i=0;i<N;i++){
        cout << i+1 << ". Kod";
        if (arr[i].c<10)
            cout << "0";
        cout << arr[i].c << " (" << arr[i].a << ")\n";
    }
    return 0;
}