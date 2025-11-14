#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, M, arr[200005];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M;
    while (M--){
        ll a, b, c;
        cin >> a >> b >> c;
        if (arr[a]<=b){
            arr[a]=c;
            cout << "YES\n";
        }
        else
            cout << "NO\n";
    }
    return 0;
}