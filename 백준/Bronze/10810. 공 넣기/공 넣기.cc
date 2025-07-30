#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, M, arr[105];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M;
    while (M--){
        ll a, b, c;
        cin >> a >> b >> c;
        for (int i=a;i<=b;i++)
            arr[i]=c;
    }
    for (int i=1;i<=N;i++)
        cout << arr[i] << " ";
    return 0;
}