#include <iostream>
#include <algorithm>
#include <vector>
#define ll long long
using namespace std;
vector<ll> arr, chk;
ll N, M, ans=0;
ll f() {
	ll ret=0;
	do {
		ll x=1;
		for (ll i=0;i<N;i++){
			if (chk[i]==1)
				x*=arr[i];
		}
		ret+=M/x;
	} while(next_permutation(chk.begin(),chk.end()));
	return ret;
}
int main () {
    cin >> N >> M;
    for (ll i=0;i<N;i++){
    	ll a;
    	cin >> a;
    	arr.push_back(a);
    }
    for (ll i=1;i<=N;i++){
    	for (ll j=i;j<N;j++)
    		chk.push_back(0);
    	for (ll j=0;j<i;j++)
    		chk.push_back(1);
    	if (i%2)
    		ans+=f();
    	else
    		ans-=f();
    	chk.clear();
    }
    cout << ans;
    return 0;
}