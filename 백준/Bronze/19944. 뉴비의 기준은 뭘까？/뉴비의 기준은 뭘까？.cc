#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, M;
int main(){
    ios::sync_with_stdio(0);
    cin.tie();
    cin >> N >> M;
    if (M<=2)
        cout << "NEWBIE!";
    else if (M<=N)
        cout << "OLDBIE!";
    else
        cout << "TLE!";
    return 0;
}