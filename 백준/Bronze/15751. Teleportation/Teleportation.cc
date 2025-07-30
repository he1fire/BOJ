#include <iostream>
#include <algorithm>
using namespace std;
int mi(int x, int y){
	if (x-y>0)
		return x-y;
	else
		return y-x;
}
int main () {
    int x, y, a, b;
    cin >> x >> y >> a >> b;
    cout << min({mi(x,y),mi(x,a)+mi(y,b),mi(x,b)+mi(y,a)});
    return 0;
}