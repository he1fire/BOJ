#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, cnt;
queue<ll> q;
int main(){
	cin >> N;
	while (1){
		ll a;
		cin >> a;
		if (a==-1)
			break;
		else if (!a){
			q.pop();
			cnt--;
		}
		else if (cnt==N)
			continue;
		else{
			q.push(a);
			cnt++;
		}
	}
	if (!q.empty()){
		while (!q.empty()){
			cout << q.front() << " ";
			q.pop();
		}
	}
	else
		cout << "empty";
    return 0;
}