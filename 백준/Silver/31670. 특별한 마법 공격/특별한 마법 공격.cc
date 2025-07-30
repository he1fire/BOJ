#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, DP[100005][2];
vector<ll> arr;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
	for (int i=0, a;i<N;i++){
        cin >> a;
        arr.push_back(a);
    }
    for (int i=1;i<=N;i++){
        DP[i][0]=DP[i-1][1];
        DP[i][1]=min(DP[i-1][0],DP[i-1][1])+arr[i-1];
    }
    cout << min(DP[N][0],DP[N][1]);
    return 0;
}