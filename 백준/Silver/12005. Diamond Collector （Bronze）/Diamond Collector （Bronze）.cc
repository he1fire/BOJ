#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main () {
    int N, M, ans=0;
    cin >> N >> M;
    vector<int> v;
    for (int i=0;i<N;i++){
        int a;
        cin >> a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    for (int i=0;i<N;i++){
        int cnt=0;
        for (int j=i;j<N;j++){
            if (v[j]-v[i]<=M)
                cnt++;
            else
                break;
        }
        ans=max(ans,cnt);
    }
    cout << ans;
    return 0;
}