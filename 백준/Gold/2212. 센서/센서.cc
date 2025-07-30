#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main () {
    vector<int> v1, v2;
    int N, M, ans=0;
    cin >> N >> M;
    for (int i=0;i<N;i++){
        int a;
        cin >> a;
        v1.push_back(a);
    }
    sort(v1.begin(),v1.end());
    for (int i=1;i<v1.size();i++)
        v2.push_back(v1[i]-v1[i-1]);
    sort(v2.rbegin(),v2.rend());
    for (int i=0;i<v2.size();i++){
        if (i<M-1)
            continue;
        ans+=v2[i];
    }
    cout << ans;
    return 0;
}