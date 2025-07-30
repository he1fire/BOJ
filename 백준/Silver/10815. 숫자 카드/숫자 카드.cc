#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
vector<int> v;
int main () {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int N, M;
	cin >> N;
	for (int i=0;i<N;i++){
	    int a;
	    cin >> a;
	    v.push_back(a);
	}
	sort(v.begin(),v.end());
	cin >> M;
	for (int i=0;i<M;i++){
	    int a, mi=0, ma=N;
	    cin >> a;
	    for (int j=0;j<20;j++){
    	    int mid=(mi+ma)/2;
    	    if (v[mid]>a)
    	        ma=mid;
    	    else
    	        mi=mid;
    	}
    	v[mi]==a ? cout << "1 " : cout << "0 ";
	}
   return 0;
}