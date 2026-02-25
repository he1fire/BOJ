#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for (ll i=1;i<N;i++)
        cout << (i%2 ? 1 : 2) << " ";
    cout << (N==1 ? 1 : (N%2 ? 3 : 2));
    return 0;
}