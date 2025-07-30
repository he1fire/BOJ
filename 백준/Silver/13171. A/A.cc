#include <iostream>
#define ll long long
#define MOD 1000000007
using namespace std;
ll N, M, ans=1;
int main () {
	cin >> N >> M;
	N%=MOD;
	while (M){
        if (M&1)
            ans=(ans*N)%MOD;
        N=(N*N)%MOD;
        M>>=1;
    }
    cout << ans;
    return 0;
}