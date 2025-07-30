#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int arr[1005];
vector<pair<int,int> > v;
int main () {
    int N, cnt=0, ans=0;
    cin >> N;
    for (int i=0;i<N;i++){
    	int a, b;
    	cin >> a >> b;
    	for (int j=a;j<b;j++)
    		arr[j]++;
    	v.push_back(make_pair(a,b));
    }
    for (int i=0;i<1000;i++){
    	if (arr[i])
    		cnt++;
    }
    for (int i=0;i<N;i++){
    	int chk=0;
    	for (int j=v[i].first;j<v[i].second;j++){
    		if (arr[j]==1)
    			chk++;
    	}
    	ans=max(ans,cnt-chk);
    }
    cout << ans;
    return 0;
}