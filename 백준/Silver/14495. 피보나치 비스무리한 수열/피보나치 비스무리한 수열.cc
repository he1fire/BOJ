#include <iostream>
#include <vector>
using namespace std;
int main () {
    vector<long long> v;
    int N;
    cin >> N;
    for (int i=0;i<3;i++)
        v.push_back(1);
    for (int i=3;i<N;i++)
        v.push_back(v[i-1]+v[i-3]);
    cout << v[N-1];
    return 0;
}