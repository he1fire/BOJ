#include <bits/stdc++.h>
#define ll long long
using namespace std;
vector<ll> arr[15];
ll N=0;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    for (int i=0;i<15;i++){
        for (int j=0;j<8;j++)
            arr[i].push_back((j+N)%20+1);
        N=(N+4)%20;
        sort(arr[i].begin(),arr[i].end());
        for (auto x:arr[i])
            cout << x << " ";
        cout << "\n";
    }
    return 0;
}