#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    vector<ll> v, v2;
    double sum=0;
    ll arr[8001]={0}, max=0;
    for (ll i=0;i<N;i++){
        ll a;
        cin >> a;
        v.push_back(a);
        sum+=a;
        arr[a+4000]++;
    }
    sort(v.begin(),v.end());
    for (ll i=0;i<=8000;i++){
        if (arr[i]>max){
            max=arr[i];
            v2.clear();
            v2.push_back(i-4000);
        }
        else if (arr[i]==max)
            v2.push_back(i-4000);
    }
    cout << (int)floor((sum/N)+0.5) << "\n";
    cout << v[N/2] << "\n";
    if (v2.size()>1)
        cout << v2[1] << "\n";
    else
        cout << v2[0] << "\n";
    cout << v[N-1]-v[0] << "\n";
    return 0;
}