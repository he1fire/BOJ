#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, x, y, arr[105], cnt;
int main(){
	cin >> N;
	for (int i=0;i<N;i++)
		cin >> arr[i];
	cin >> x >> y;
	for (int i=0;i<N;i++){
		if (arr[i]>=y)
			cnt++;
	}
	cout << N*x/100 << " " << cnt;
    return 0;
}