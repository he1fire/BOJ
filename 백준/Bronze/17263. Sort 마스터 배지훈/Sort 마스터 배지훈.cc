#include <iostream>
#include <algorithm>
using namespace std;
int main () {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int N, ma=-1;
	cin >> N;
	for(int i=0;i<N;i++){
		int a;
		cin >> a;
		ma=max(ma,a);
	}
		cout << ma;
   return 0;
}