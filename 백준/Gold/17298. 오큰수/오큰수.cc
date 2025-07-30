#include <bits/stdc++.h>
#define ll long long
using namespace std;
typedef pair<ll,ll> pll;
ll N, arr[1000005];
stack<pll> s;
int main(){
    cin >> N;
    for (int i=0;i<N;i++){
        ll a;
        cin >> a;
        while (!s.empty() && s.top().first<a){
            arr[s.top().second]=a;
            s.pop();
        }
        s.push({a,i});
    }
    while (!s.empty()){
        arr[s.top().second]=-1;
        s.pop();
    }
    for (int i=0;i<N;i++)
        cout << arr[i] << " ";
    return 0;
}