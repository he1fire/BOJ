#include <bits/stdc++.h>
#define ll long long
using namespace std;
priority_queue<int, vector<int>, greater<int> > pq;
vector<pair<int,int> > v;
int main () {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
	int N;
    cin >> N;
    for (int i=0;i<N;i++){
        int a, b, c;
        cin >> c >> a >> b;
        v.push_back({a,b});
    }
    sort(v.begin(),v.end());
    for (int i=0;i<N;i++){
        int x=v[i].first;
        int y=v[i].second;
        if (!pq.empty() && pq.top()<=x)
			pq.pop();
        pq.push(y);

    }
    cout << pq.size();
    return 0;
}