#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll a, b, c;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> a >> b >> c;
    cout << floor((a+1)*(b+1)/(double)(c+1)-1);
    return 0;
}