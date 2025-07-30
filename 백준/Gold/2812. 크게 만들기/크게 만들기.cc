#include <bits/stdc++.h>
#define ll long long
using namespace std;
string arr, ans;
stack<char> s;
ll N, M;
int main(){
	cin >> M >> N >> arr;
	for (int i=0;i<arr.size();i++){
		char a=arr[i];
		while (!s.empty() && N>0 && s.top()<a){
			s.pop();
			N--;
		}
		s.push(a);
	}
	while (N>0){
		s.pop();
		N--;
	}
	while (!s.empty()){
		ans+=s.top();
		s.pop();
	}
	reverse(ans.begin(),ans.end());
	cout << ans;
    return 0;
}