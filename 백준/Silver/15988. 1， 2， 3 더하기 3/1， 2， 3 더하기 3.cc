#include <iostream>
#define ll long long
using namespace std;
ll arr[1000005]={0,1,2,4};
int main () {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    for (int i=4;i<=1000000;i++)
        arr[i]=(arr[i-1]+arr[i-2]+arr[i-3])%1000000009;
    cin >> N;
    for (int i=0;i<N;i++){
    	ll a;
    	cin >> a;
    	cout << arr[a] << "\n";
    }
    return 0;
}