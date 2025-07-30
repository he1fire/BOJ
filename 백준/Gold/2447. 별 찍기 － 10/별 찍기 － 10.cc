#include <bits/stdc++.h>
#define ll long long
using namespace std;
char arr[6600][6600];
ll N;
void f(ll x, ll y, ll len){
	for (int i=0;i<3;i++){
		for (int j=0;j<3;j++){
			if (!(i==1 && j==1)){
				if (len==3)
					arr[x+i][y+j]='*';
				else
					f(x+(len/3)*i,y+(len/3)*j,len/3);
			}
		}
	}
}
int main(){
    cin >> N;
	for (int i=0;i<N;i++){
		for (int j=0;j<N;j++)
			arr[i][j]=' ';
	}
	f(0,0,N);
	for (int i=0;i<N;i++){
		for (int j=0;j<N;j++)
			cout << arr[i][j];
		cout << "\n";
	}
    return 0;
}