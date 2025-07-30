#include <bits/stdc++.h>
#define ll long long
using namespace std;
typedef pair<ll,ll> pll;
ll N;
vector<pll> chk;
ll len(pll x, pll y){
	return abs(x.first-y.first)*abs(x.first-y.first)+abs(x.second-y.second)*abs(x.second-y.second);
}
ll f(){
	if (len(chk[0],chk[1])==len(chk[0],chk[2]) && len(chk[0],chk[2])==len(chk[1],chk[3]) && len(chk[1],chk[3])==len(chk[2],chk[3]) && len(chk[0],chk[3])==len(chk[1],chk[2]))
		return 1;
	else
		return 0;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
	while (N--){
        chk.clear();
        for (int i=0;i<4;i++){
            ll a, b;
            cin >> a >> b;
            chk.push_back({a,b});
        }
        sort(chk.begin(),chk.end());
        cout << f() << "\n";
	}
    return 0;
}