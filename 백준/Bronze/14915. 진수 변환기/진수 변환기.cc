#include <bits/stdc++.h>
#define ll long long
using namespace std;
string s="0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
ll N, M;
void f(ll x, ll y){
	if (x/y)
		f(x/y,y);
	cout << s[x%y];
}
int main(){
	cin >> N >> M;
	f(N,M);
    return 0;
}