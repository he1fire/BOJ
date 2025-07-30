#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for (int i=0;i<N;i++)
        cout << "1";
    for (int i=0;i<N-1;i++)
        cout << "0";
    return 0;
}