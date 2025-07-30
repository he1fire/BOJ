#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll arr[40], N, M, ans=1;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
	cin >> N;
	while (N--){
		ll a, b;
		cin >> a >> b;
		for (int i=a;i<b;i++)
			arr[i]++;
	}
	cin >> M;
	for (int i=0;i<32;i++){
		if (arr[i]>M)
			ans=0;
	}
	cout << ans;
    return 0;
}