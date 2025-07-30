#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N;
vector<string> arr;
bool cmp(string x, string y){
	if (x.size()!=y.size())
		return x.size()<y.size();
	return x<y;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
	cin >> N;
	for (int i=0;i<N;i++){
		string a;
		cin >> a;
		arr.push_back(a);
	}
	sort(arr.begin(),arr.end(),cmp);
	for (int i=0;i<N;i++){
        if (i==0 || arr[i-1]!=arr[i])
        	cout << arr[i] << "\n";
    }
    return 0;
}