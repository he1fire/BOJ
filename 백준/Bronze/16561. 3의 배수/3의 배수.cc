#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, ans;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    N/=3;
    N--;
    N>=2 ? cout << ((N-1)*N)/2 : cout << "0";
    return 0;
}