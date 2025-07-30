#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, arr[15][4];
int main(){
	for (int i=0;i<10;i++){
		for (int j=1, x=i;j<=4;j++){
			arr[i][j%4]=x%10;
			x=(x*i)%10;
		}
	}
	cin >> N;
	while (N--){
		ll a, b;
		cin >> a >> b;
		ll ans=arr[a%10][b%4];
		cout << (ans ? ans : 10) << "\n";
	}
	return 0;
}