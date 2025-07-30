#include <bits/stdc++.h>
#define ll long long
#define INF 987654321
#define MOD 1000000007
using namespace std;
typedef pair<ll,ll> pll;
ll N;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
	cin >> N;
	if (N!=3){
		cout << "Woof-meow-tweet-squeek";
		return 0;
	}
	while (N--){
		ll a, b;
		cin >> a >> b;
		if (a==2 || a==5 || b==2 || b==5){
			cout << "Woof-meow-tweet-squeek";
			return 0;
		}
	}
	cout << "Wa-pa-pa-pa-pa-pa-pow!";
    return 0;
}