#include <bits/stdc++.h>
#define ll long long
#define INF 987654321
#define MOD 1000000007
using namespace std;
typedef pair<ll,ll> pll;
ll N, arr[10][10], row[10][10], col[10][10], box[10][10];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
	cin >> N;
	for (int x=1;x<=N;x++){
		ll ans=1;
		fill(&row[0][0],&row[9][10],0);
		fill(&col[0][0],&col[9][10],0);
		fill(&box[0][0],&box[9][10],0);
		for (int i=0;i<9;i++){
			for (int j=0;j<9;j++){
				cin >> arr[i][j];
				ll a=arr[i][j];
				if (a!=0)
					row[i][a]=col[j][a]=box[i/3*3+j/3][a]=1;
			}
		}
		for (int i=0;i<9;i++){
			for (int j=1;j<=9;j++){
				if (row[i][j]==0 || col[i][j]==0 || box[i][j]==0)
					ans=0;
			}
		}
		cout << "Case " << x << ": " << (ans ? "CORRECT" : "INCORRECT") << "\n";
	}
    return 0;
}