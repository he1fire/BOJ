#include <bits/stdc++.h>
#define ll long long
using namespace std;
long long sum(vector<int> &a) {
	long long ans = 0;
    for (ll i=0;i<a.size();i++)
        ans+=a[i];
	return ans;
}
