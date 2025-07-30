#include <iostream>
#define ll long long
using namespace std;
int main () {
	ll N, M;
	cin >> N >> M;
    int a=0, b=0, ans=1;
    a=M-1;
    b=M-N;
    if (a-b<b)
        b=a-b;
    for (int i=1;i<=b;i++){
        ans*=a-i+1;
        ans/=i;
    }
    cout << ans;
    return 0;
}