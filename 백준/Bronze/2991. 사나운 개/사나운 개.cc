#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	for (int i=0;i<3;i++){
		ll x, ans=0;
		cin >> x;
		if (x%(a+b)<=a && 0<x%(a+b))
			ans++;
		if (x%(c+d)<=c && 0<x%(c+d))
			ans++;
		cout << ans << "\n";
	}
	return 0;
}