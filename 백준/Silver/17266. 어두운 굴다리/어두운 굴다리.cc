#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main () {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	vector<int> v;
    int N, M, mx=0;
    cin >> N >> M;
    for (int i=0;i<M;i++){
    	int a;
    	cin >> a;
    	v.push_back(a);
    }
    for (int i=0;i<M-1;i++)
    	mx=max(mx,(v[i+1]-v[i]+1)/2);
    mx=max({mx, v[0], N-v[M-1]});
    cout << mx;
    return 0;
}