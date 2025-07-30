#include <bits/stdc++.h>
#define ll long long
using namespace std;
string S;
int main(){
	cin >> S;
	for (int i=0;i<S.size();i++){
		ll x=S[i], cnt=0;
		while (x){
			cnt+=x%10;
			x/=10;
		}
		for (int j=0;j<cnt;j++)
			cout << S[i];
		cout << "\n";
	}
    return 0;
}