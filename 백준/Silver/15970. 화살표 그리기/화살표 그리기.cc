#include <bits/stdc++.h>
#define ll long long
#define INF 1e9+7
using namespace std;
ll N, ans;
vector<ll> arr[5005];
int main(){
	cin >> N;
	for (int i=0;i<N;i++){
		ll a, b;
		cin >> a >> b;
		arr[b].push_back(a);
	}
	for (int i=1;i<=N;i++){
		sort(arr[i].begin(),arr[i].end());
		for (int j=0;j<arr[i].size();j++){
			ll mn=INF;
			if (j==0)
				mn=arr[i][j+1]-arr[i][j];
			else if (j==arr[i].size()-1)
				mn=arr[i][j]-arr[i][j-1];
			else
				mn=min(arr[i][j+1]-arr[i][j],arr[i][j]-arr[i][j-1]);
			ans+=mn;
		}
	}
	cout << ans;
    return 0;
}