#include <bits/stdc++.h>
#define ll long long
#define INF 10e10
using namespace std;
ll N, L, R, X, arr[20];
ll backtrack(ll now, ll total, ll mn, ll mx){
    ll ret=0;
    for (int i=now+1;i<N;i++){
        ret+=backtrack(i,total+arr[i],min(mn,arr[i]),max(mx,arr[i]));
    }
    if (L<=total && total<=R && mx-mn>=X)
        ret++;
    return ret;
}
int main() {
    cin >> N >> L >> R >> X;
    for (int i=0;i<N;i++)
        cin >> arr[i];
    cout << backtrack(-1,0,INF,-INF);
    return 0;
}