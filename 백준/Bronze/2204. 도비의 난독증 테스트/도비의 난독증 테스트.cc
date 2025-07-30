#include <bits/stdc++.h>
#define ll long long
#define INF 987654321
#define MOD 1000000007
using namespace std;
typedef pair<ll,ll> pll;
ll N;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    while (1){
		cin >> N;
		if (!N)
			break;
		string ans, min="z";
		while (N--){
			string a, b;
			cin >> a;
			b=a;
			for (int i=0;i<b.size();i++){
				if ('a'<=b[i] && b[i]<='z')
					b[i]=b[i]-'a'+'A';
			}
			if (b<min){
				ans=a;
				min=b;
			}
		}
		cout << ans << "\n";
	}
    return 0;
}