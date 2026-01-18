#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, arr[105];
vector<ll> v1, v2;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    arr[0]=arr[1]=1;
    for (ll i=2;i<105;i++){
        if (arr[i])
            continue;
        for (ll j=i*i;j<105;j+=i)
            arr[j]=1;
        v1.push_back(i);
    }
    for (ll i=0;i<v1.size()-1;i++)
        v2.push_back(v1[i]*v1[i+1]);
    for (auto x:v2){
        if (x>N){
            cout << x;
            break;
        }
    }
    return 0;
}