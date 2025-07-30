#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N;
string S;
void f(ll x, ll len){
	if (len!=1){
		for (int i=0;i<len/3;i++)
			S[x+i+len/3]=' ';
		f(x,len/3);
		f(x+(len/3*2),len/3);
	}
}
int main(){
	while (cin >> N){
		S.clear();
		ll tmp=1;
		while (N--)
			tmp*=3;
		for (int i=0;i<tmp;i++)
			S+='-';
		f(0,tmp);
		cout << S << "\n";
	}
    return 0;
}