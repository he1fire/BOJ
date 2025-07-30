#include <iostream>
using namespace std;
int main () {
	int N, M, ans=0, cnt=1;
	cin >> N >> M;
	for (int i=0;N!=M;i++){
		if (i%2==0){
			ans+=cnt/2;
            N+=cnt/2;
			for (int j=0;j<cnt;j++){
				ans++;
				N++;
				if (N==M)
					break;
			}
		}
		else{
			ans+=cnt/2;
            N-=cnt/2;
			for (int j=0;j<cnt;j++){
				ans++;
				N--;
				if (N==M)
					break;
			}
		}
		cnt*=2;
	}
	cout << ans;
   return 0;
}