#include <bits/stdc++.h>
#define ll long long
using namespace std;
typedef pair<ll,ll> pll;
ll N, M, arr[100005][2], chk=1;
vector<pll> v;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M;
    for (int i=0;i<N;i++){
        ll a, b;
        cin >> a >> b;
        arr[a][0]++;
        arr[b][1]++;
    }
    for (int i=0;i<M;i++){
        ll a, b;
        cin >> a >> b;
        arr[a][0]--;
        arr[b][1]--;
    }
    for (int i=0;i<=100000;i++){
        if (abs(arr[i][0])%2 || abs(arr[i][1])%2)
            chk=0;
    }
    cout << (chk ? "YES" : "NO");
    return 0;
}