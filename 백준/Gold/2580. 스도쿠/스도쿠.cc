#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll arr[10][10], row[10][10], col[10][10], box[10][10], fin=0;
void backtrack(ll now){
	ll x=now/9, y=now%9;
	if (now==81){
		fin=1;
		for (int i=0;i<9;i++){
			for (int j=0;j<9;j++){
				cout << arr[i][j] << " ";
			}
			cout << "\n";
		}
	}
	if (fin)
		return ;
	if (arr[x][y]==0){
		for (int i=1;i<=9;i++){
			if (row[x][i]==0 && col[y][i]==0 && box[x/3*3+y/3][i]==0){
				arr[x][y]=i;
				row[x][i]=col[y][i]=box[x/3*3+y/3][i]=1;
				backtrack(now+1);
				arr[x][y]=0;
				row[x][i]=col[y][i]=box[x/3*3+y/3][i]=0;
			}
		}
	}
	else{
		backtrack(now+1);
	}
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
	for (int i=0;i<9;i++){
		for (int j=0;j<9;j++){
			cin >> arr[i][j];
			ll a=arr[i][j];
			if (a!=0)
                row[i][a]=col[j][a]=box[i/3*3+j/3][a]=1;
		}
	}
	backtrack(0);
    return 0;
}