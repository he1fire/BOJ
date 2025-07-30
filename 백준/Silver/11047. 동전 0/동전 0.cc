#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, M, arr[15], cnt, ans;
int main(){
    cin >> N >> M;
    for (int i=1;i<=N;i++){
    	cin >> arr[i];
    	if (arr[i]<=M)
    		cnt=i;
    }
    for (int i=cnt;i>0;i--){
    	ans+=M/arr[i];
    	M%=arr[i];
    }
    cout << ans;
    return 0;
}