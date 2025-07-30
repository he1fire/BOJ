#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, M;
vector<ll> A, B, arr;
int main(){
	cin >> N >> M;
	for (int i=0;i<N;i++){
		ll a;
		cin >> a;
		A.push_back(a);
	}
	for (int i=0;i<M;i++){
		ll a;
		cin >> a;
		B.push_back(a);
	}
	sort(A.begin(),A.end());
	sort(B.begin(),B.end());
	for (int i=0;i<N;i++){
		if (binary_search(B.begin(),B.end(),A[i])==0)
			arr.push_back(A[i]);
	}
	cout << arr.size() << "\n";
	for (auto i:arr)
		cout << i << " ";
	return 0;
}