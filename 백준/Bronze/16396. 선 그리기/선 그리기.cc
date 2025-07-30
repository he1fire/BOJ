#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, arr[10005], ans;
int main(){
	cin >> N;
	for (int i=0;i<N;i++){
		ll a, b;
		cin >> a >> b;
		for (int j=a;j<b;j++)
			arr[j]=1;
	}
	for (int i=1;i<10000;i++){
		if (arr[i])
			ans++;
	}
	cout << ans;
    return 0;
}