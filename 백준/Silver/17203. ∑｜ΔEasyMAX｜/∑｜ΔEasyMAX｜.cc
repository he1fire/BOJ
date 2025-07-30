#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int N, M;
    vector<int> v;
    cin >> N >> M;
    for (int i=0;i<N;i++){
        int a;
        cin >> a;
        v.push_back(a);
    }
    for (int i=0;i<M;i++){
        int a, b, cnt=0;
        cin >> a >> b;
        for (int j=a;j<b;j++)
            cnt+=max(v[j]-v[j-1],v[j-1]-v[j]);
        cout << cnt << "\n";
    }
    return 0;
}