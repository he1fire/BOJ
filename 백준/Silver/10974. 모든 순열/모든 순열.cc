#include <bits/stdc++.h>
#define ll long long
using namespace std;
vector<ll> v, chk;
ll N;
int main(){
    cin >> N;
    for (ll i=1;i<=N;i++)
        v.push_back(i);
    do{
    for (auto i:v)
        cout << i << " ";
    cout << "\n";
    } while(next_permutation(v.begin(),v.end()));
    return 0;
}