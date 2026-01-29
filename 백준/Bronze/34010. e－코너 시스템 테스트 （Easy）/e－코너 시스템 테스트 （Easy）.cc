#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for (ll i=0,a;i<N*(N-1)*2;i++)
        cin >> a;
    cout << (N-1)*2 << " " << (N-2)*2+1;
    return 0;
}