#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main () {
	vector<pair<pair<int,int>,char> > v;
	int N, M;
	cin >> N >> M;
	for(int i=0;i<M;i++){
		int a, b;
		char c;
		cin >> a >> b >> c;
		v.push_back(make_pair(make_pair(b,a),c));
	}
	sort(v.begin(),v.end());
	for (int i=0;i<M;i++)
		cout << v[i].second;
   return 0;
}