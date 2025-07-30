#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, ans;
int main(){
	cin >> N;
	for (int i=1;i<=500;i++){
		for (int j=i+1;j<=500;j++){
			if (j*j==i*i+N)
				ans++;
		}
	}
	cout << ans;
    return 0;
}