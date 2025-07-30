#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int N, M, cnt[151]={0}, ans=1;
    vector<int> v;
    cin >> N >> M;
    for (int i=0;i<N;i++){
        int a;
        cin >> a;
        v.push_back(a);
    }
    for (int i=0;1;ans++){
        cnt[v[i]]++;
        i=v[i];
        if (cnt[M]!=0){
            cout << ans;
            break;
        }
        if (cnt[i]>1){
            cout << "-1";
            break;
        }
    }
    return 0;
}