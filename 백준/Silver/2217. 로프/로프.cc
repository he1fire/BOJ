#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main () {
    vector<int> x;
    int N, ans=0;
    cin >> N;
    for (int i=0;i<N;i++){
        int a;
        cin >> a;
        x.push_back(a);
    }
    sort(x.rbegin(),x.rend());
    for (int i=0;i<N;i++)
        ans=max(x[i]*(i+1),ans);
    cout << ans;
    return 0;
}