#include <iostream>
#include <vector>
#define ll long long
using namespace std;
int main () {
    vector<ll> v;
    v.push_back(1);
    v.push_back(1);
    for (int i=2;i<=52;i++)
        v.push_back((v[i-1]+v[i-2]+1)%1000000007);
    int N;
    cin >> N;
    cout << v[N];
    return 0;
}