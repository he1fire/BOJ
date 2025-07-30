#include <iostream>
using namespace std;
int main () {
    int N, ans=5000;
    while (cin >> N){
    	if (N==1)
    		ans-=500;
    	else if (N==2)
    		ans-=800;
    	else
    		ans-=1000;
    }
    cout << ans;
    return 0;
}