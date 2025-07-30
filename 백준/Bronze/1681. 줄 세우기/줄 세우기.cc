#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, M, cnt;
int main(){
	cin >> N >> M;
	for (int i=1;1;i++){
		ll x=i, chk=1;
		while (x){
			if (x%10==M)
				chk=0;
			x/=10;
		}
		if (chk)
			cnt++;
		if (cnt==N){
			cout << i;
			break;
		}
	}
    return 0;
}