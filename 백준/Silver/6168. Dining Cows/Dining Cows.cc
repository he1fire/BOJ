#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    vector<int> x;
    int N, ans=30001;
    cin >> N;
    for (int i=0;i<N;i++){
        int a;
        cin >> a;
        x.push_back(a);
    }
    for (int i=0;i<=N;i++){
        int cnt=0;
        for (int j=0;j<i;j++){
            if (x[j]!=1)
                cnt++;
        }
        for (int j=i;j<N;j++){
            if (x[j]!=2)
                cnt++;
        }
        ans=min(ans,cnt);
    }
    cout << ans;
    return 0;
}