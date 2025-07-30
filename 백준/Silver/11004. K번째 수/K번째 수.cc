#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
vector<int> v;
int main () {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N, M;
    cin >> N >> M;
    for (int i=0;i<N;i++){
        int a;
        cin >> a;
        v.push_back(a);
    }
    nth_element(v.begin(), v.begin()+M-1, v.end());
    cout << v[M-1];
    return 0;
}