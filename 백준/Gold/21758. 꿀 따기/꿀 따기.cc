#include <bits/stdc++.h>
#define ll long long
#define INF 1e9+7
using namespace std;
ll N, arr[100005], sum[100005];
ll left(){
    ll mn=INF;
    for (int i=1;i<N-1;i++)
        mn=min(mn,sum[N-2]-sum[i-1]+arr[i]);
    return (sum[N-1]-arr[N-1])*2-mn;
} 
ll right(){
    ll mn=INF;
    for (int i=1;i<N-1;i++)
        mn=min(mn,sum[i]-sum[0]+arr[i]);
    return (sum[N-1]-arr[0])*2-mn;
}
ll mid(){
    ll mx=0;
    for (int i=1;i<N-1;i++)
        mx=max(mx,arr[i]);
    return sum[N-2]-arr[0]+mx;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
	for (int i=0;i<N;i++){
        cin >> arr[i];
        sum[i]=arr[i];
        if (i)
            sum[i]+=sum[i-1];
    }
    cout << max({left(),right(),mid()});
    return 0;
}