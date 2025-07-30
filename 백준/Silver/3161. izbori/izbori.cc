#include <iostream>
#include <algorithm>
using namespace std;
int arr[55][55], cnt[55], ans;
int main () {
    int N, M;
    cin >> M >> N;
    for (int i=1;i<=M;i++){
    	for (int j=1;j<=N;j++)
    		cin >> arr[i][j];
    }
    for (int a=1;a<=N;a++){
    	for (int b=a+1;b<=N;b++){
    		int x=0, y=0;
    		for (int i=1;i<=M;i++){
    			for (int j=1;j<=N;j++){
    				if (arr[i][j]==a){
    					x++;
    					break;
    				}
    				if (arr[i][j]==b){
    					y++;
    					break;
    				}
    			}	
    		}
    		x>y ? cnt[a]++ : cnt[b]++;
    	}
    }
    for (int i=1;i<=N;i++)
    	ans=max(ans,cnt[i]);
    for (int i=1;i<=N;i++)
    	if (cnt[i]==ans)
    		cout << i<< "\n";
    return 0;
}