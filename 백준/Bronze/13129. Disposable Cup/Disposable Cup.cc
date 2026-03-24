#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll A, B, N;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> A >> B >> N;
    for (ll i=0;i<N;i++)
        cout << B*(i+1)+A*N << " ";
    return 0;
}