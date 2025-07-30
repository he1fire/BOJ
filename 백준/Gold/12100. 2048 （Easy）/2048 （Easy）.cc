#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, ans, arr[25][25], cp[25][25];
void rotate(){
	ll tmp[25][25];
	for (int i=0;i<N;i++)
    	for (int j=0;j<N;j++)
			tmp[i][j]=cp[i][j];
   	for (int i=0;i<N;i++)
    	for (int j=0;j<N;j++)
        	cp[i][j]=tmp[N-j-1][i];
}
void move(){
	ll visited[25][25]={0,};
	for (int i=0;i<N;i++){
		for (int j=N-1;j>=0;j--){
			ll x=i, y=j;
			while(cp[x][y]!=0 && y+1<N && cp[x][y+1]==0){
				cp[x][y+1]=cp[x][y];
				cp[x][y]=0;
				y++;
			}
			if (cp[x][y]!=0 &&  y+1<N && cp[x][y]==cp[x][y+1] && visited[x][y+1]==0){
				cp[x][y]=0;
				cp[x][y+1]*=2;
				visited[x][y+1]=1;
			}
		}
	}
}
ll f(ll x){
	ll ret=0;
	for (int i=0;i<5;i++){
		for (int j=0;j<x%4;j++)
			rotate();
		move();
		x/=4;
	}
	for (int i=0;i<N;i++){
		for (int j=0;j<N;j++){
			ret=max(ret,cp[i][j]);
		}
	}
	return ret;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
	for (int i=0;i<N;i++){
		for (int j=0;j<N;j++){
			cin >> arr[i][j];
		}
	}
	for (int x=0;x<1024;x++){
		for (int i=0;i<N;i++){
			for (int j=0;j<N;j++){
				cp[i][j]=arr[i][j];
			}
		}
		ans=max(ans,f(x));
	}
	cout << ans;
    return 0;
}