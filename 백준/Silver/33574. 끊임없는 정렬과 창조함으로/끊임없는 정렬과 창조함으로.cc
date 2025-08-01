#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N;
vector<ll> arr;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    while (N--){
        ll a, b, c;
        cin >> a;
        if (a==1){
            cin >> b;
            if (b==1)
                sort(arr.begin(),arr.end());
            else
                sort(arr.begin(),arr.end(),greater<ll>());
        }
        else{
            cin >> b >> c;
            arr.insert(arr.begin()+b,c);
        }
    }
    cout << arr.size() << "\n";
    for (auto x:arr)
        cout << x << " ";
    return 0;
}