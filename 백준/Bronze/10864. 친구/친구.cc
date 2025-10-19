#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, M, arr[1005];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M;
    for (int i=0;i<M;i++){
        ll a, b;
        cin >> a >> b;
        arr[a]++;
        arr[b]++;
    }
    for (int i=1;i<=N;i++)
        cout << arr[i] << "\n";
    return 0;
}