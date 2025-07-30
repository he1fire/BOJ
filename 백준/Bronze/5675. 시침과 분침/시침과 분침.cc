#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, arr[181], h, m;
int main(){
	for (int i=1;i<=24*60;i++){
		m=(m+6)%360;
		if (i%12)
			h=(h+6)%360;
		ll tmp=abs(h-m);
		if (tmp<=180)
			arr[tmp]=1;
		else
			arr[360-tmp]=1;
	}
	while (cin >> N)
		cout << (arr[N] ? "Y\n" : "N\n");
    return 0;
}