#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, M, ans=1e9+7;
string arr[55];
ll f(ll x, ll y, ll z){
	ll ret=0;
	for (int i=x;i<x+8;i++){
		for (int j=y;j<y+8;j++){
			if (((i+j)%2==z && arr[i][j]=='W') || ((i+j)%2!=z && arr[i][j]=='B'))
				ret++;
		}
	}
	return ret;
}
int main(){
	cin >> N >> M;
	for (int i=0;i<N;i++){
		cin >> arr[i];
	}
	for (int i=0;i<=N-8;i++){
		for (int j=0;j<=M-8;j++){
			ans=min(f(i,j,1), ans);
			ans=min(f(i,j,0), ans);
		}
	}
	cout << ans;
	return 0;
}