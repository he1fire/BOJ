#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, M, ans, arr[1000005], cost[1000005];
ll Find(ll x){
    if (x==arr[x])
        return x;
    return arr[x]=Find(arr[x]);
}
void Union(ll x, ll y, ll z){
    cost[Find(y)]=cost[Find(x)]+cost[Find(y)]-z;
    arr[Find(x)]=Find(y);
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M;
    for (int i=0;i<=N;i++)
        arr[i]=i;
    for (int i=1;i<=N;i++)
        cin >> cost[i];
    for (int i=0;i<M;i++){
        ll a, b, c;
        cin >> a >> b >> c;
        if (Find(a)==Find(b))
            cout << "UNNECESSARY\n";
        else if (cost[Find(a)]<c || cost[Find(b)]<c)
            cout << "IMPOSSIBLE\n";
        else{
            Union(a,b,c*2);
            cout << "BUILT\n";
        }
    }
    return 0;
}