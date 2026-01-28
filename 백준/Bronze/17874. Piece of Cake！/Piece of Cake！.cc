#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, a, b;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> a >> b;
    cout << max(a,N-a)*max(b,N-b)*4;
    return 0;
}