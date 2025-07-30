#include <bits/stdc++.h>
#define ll long long
using namespace std;
double N, M;
int main(){
    cin >> N >> M;
    if (N<M)
      swap(N,M);
    cout << max(M/2,min(N/3,M));
}