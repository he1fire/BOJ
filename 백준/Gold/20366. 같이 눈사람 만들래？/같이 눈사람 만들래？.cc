#include <bits/stdc++.h>
#define ll long long
#define INF 1e9+7
using namespace std;
ll N, visited[605], ans=INF;
vector<ll> arr;
void Twopointer(ll x){
    ll L=0, R=N-1;
    while (L<R){
        if (visited[L]){
            L++;
            continue;
        }
        if (visited[R]){
            R--;
            continue;
        }
        ll dx=arr[L]+arr[R];
        ans=min(ans,abs(x-dx));
        if (dx>x)
            R--;
        else
            L++;
    }
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for (int i=0,a;i<N;i++){
        cin >> a;
        arr.push_back(a);
    }
    sort(arr.begin(),arr.end());
    for (int i=1;i<N;i++){
        for (int j=0;j<i;j++){
            visited[i]=visited[j]=1;
            Twopointer(arr[i]+arr[j]);
            visited[i]=visited[j]=0;
        }
    }
    cout << ans;
    return 0;
}