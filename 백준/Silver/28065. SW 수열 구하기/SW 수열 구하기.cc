#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N;
vector<ll> v;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for (int i=0;i<N/2;i++){
        v.push_back(N-i);
        v.push_back(i+1);
    }
    if (N%2)
        v.push_back(N/2+1);
    for (auto i:v)
        cout << i << " ";
    return 0;
}