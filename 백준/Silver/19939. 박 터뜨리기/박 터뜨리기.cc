#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, K;
int main() {
    cin >> N >> K;
    if (N<K*(K+1)/2)
        cout << "-1";
    else 
        (N-K*(K+1)/2)%K ? cout << K : cout << K-1;
    return 0;
}