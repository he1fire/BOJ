#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    if (N==2)
        cout << 3;
    else
        cout << N;
    return 0;
}