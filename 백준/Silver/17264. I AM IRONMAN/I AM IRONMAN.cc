#include <iostream>
#include <algorithm>
#include <string>
#include <set>
using namespace std;
int main () {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	set<string> s;
	int N, M, W, L, C, cnt=0, ans=0;
	cin >> N >> M >> W >> L >> C;
	for(int i=0;i<M;i++){
		string a;
		char b;
		cin >> a >> b;
		if (b=='W')
			s.insert(a);
	}
	for (int i=0;i<N;i++){
		string a;
		cin >> a;
		auto it=s.find(a);
		if (it!=s.end())
			cnt+=W;
		else
			cnt-=L;
		if (cnt<0)
			cnt=0;
		if (cnt>=C)
			ans=1;
	}
	ans ? cout << "I AM NOT IRONMAN!!": cout << "I AM IRONMAN!!";
   return 0;
}