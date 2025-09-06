#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, ans=1;
char c='x';
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    while (N--){
        char a;
        cin >> a;
        if (a!=c){
            ans++;
            c=a;
        }
    }
    cout << ans;
    return 0;
}