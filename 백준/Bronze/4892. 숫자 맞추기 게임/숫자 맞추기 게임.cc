#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    for (ll i=1;1;i++){
        cin >> N;
        if (!N)
            break;
        cout << i << ". " << (N%2 ? "odd " : "even ") << N/2 << "\n";
    }
}