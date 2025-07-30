#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
vector<int> v;
int N, M, ans;
void f(int x){
    vector<int> y;
    for (int i=0;i<x;i++)
        y.push_back(1);
    for (int i=0;i<N-x;i++)
        y.push_back(0);
    do {
        int cnt=0;
        for (int i=0;i<N;i++){
            if (y[i]==1)
                cnt+=v[i];
        }
        if (cnt==M)
            ans++;
    } while (prev_permutation(y.begin(),y.end()));
}
int main () {
    cin >> N >> M;
    for (int i=0;i<N;i++){
        int a;
        cin >> a;
        v.push_back(a);
    }
    for (int i=1;i<=N;i++)
        f(i);
    cout << ans;
    return 0;
}