#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    while (N--){
        string a, b;
        cin >> a >> b;
        a==b ? (cout << "OK\n") : (cout << "ERROR\n");
    }
    return 0;
}