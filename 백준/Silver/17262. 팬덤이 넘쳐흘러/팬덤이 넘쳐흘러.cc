#include <iostream>
#include <algorithm>
using namespace std;
int main () {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int N, st=100001, end=0;
    cin >> N;
    for (int i=0;i<N;i++){
    	int a, b;
    	cin >> a >> b;
    	end=max(end,a);
    	st=min(st,b);
    }
    end-st>0 ? cout << end-st : cout << "0";
    return 0;
}