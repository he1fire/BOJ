#include <iostream>
#include <string>
#define ll long long
using namespace std;
int main () {
	ll T;
	cin >> T;
	while (T--){
		ll N, M;
		string S;
		cin >> N >> M >> S;
		for (auto i:S){
			i-='A';
			i=(i*N+M)%26;
			i+='A';
			cout << i;
		}
		cout << "\n";
	}
   return 0;
}