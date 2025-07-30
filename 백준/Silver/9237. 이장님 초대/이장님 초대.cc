#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main () {
    vector<int> x;
    int N, ans=0;
    cin >> N;
    for (int i=0;i<N;i++)
        {
        int a;
        cin >> a;
        x.push_back(-a);
        }
    sort(x.begin(),x.end());
    for (int i=0;i<N;i++)
        {
        x[i]-=i+2;
        ans=min(ans,x[i]);
        }
    cout << -ans;
    return 0;
    }