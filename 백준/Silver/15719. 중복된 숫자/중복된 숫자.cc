#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, ans=0;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for (int i=0;i<N;i++){
        ll a;
        cin >> a;
        ans+=a;
    }
    cout << ans-(N*(N-1)/2);
    return 0;
}