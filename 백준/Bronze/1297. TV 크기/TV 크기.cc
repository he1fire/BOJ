#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll D, H, W;
int main(){
    ios_base::sync_with_stdio(0);
	cin.tie(0);
	cin >> D >> H >> W;
	double x = sqrt((double)(D*D)/(H*H+W*W));
	cout << floor(H*x) << " " << floor(W*x);
    return 0;
}