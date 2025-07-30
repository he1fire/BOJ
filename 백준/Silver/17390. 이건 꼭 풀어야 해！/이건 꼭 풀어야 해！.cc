#include <bits/stdc++.h>
#define ll long long
#define INF 1000000007
using namespace std;
ll N, M, cnt;
vector<ll> arr, sum;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M;
    for (int i=0;i<N;i++){
        ll a;
        cin >> a;
        arr.push_back(a);
    } 
    sort(arr.begin(),arr.end());
    sum.push_back(0);
    for (int i=0;i<N;i++){
        cnt+=arr[i];
        sum.push_back(cnt);
    }
    for (int i=0;i<M;i++){
        ll a, b;
        cin >> a >> b;
        a--;
        cout << sum[b]-sum[a] << "\n";
    }
    return 0;
}