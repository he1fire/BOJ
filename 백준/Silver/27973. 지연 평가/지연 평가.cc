#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, ans=1, cnt=1;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
	cin >> N;
	while (N--){
		ll a, b;
		cin >> a;
		if (a==3)
			cout << ans << "\n";
		else{
			cin >> b;
			if (a==2)
				ans+=cnt*b;
			else if (a==1){
                ans*=b;
                cnt*=b;
            }
            else
                ans+=b;
		}
	}
	return 0;
}