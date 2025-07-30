#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll a, b, c, d;
string arr[3]={"Persepolis","Esteghlal","Penalty"};
ll f(){
    if (a+d>b+c) return 0;
    else if (a+d<b+c) return 1;
    else if (d>b) return 0;
    else if (d<b) return 1;
    else return 2;
}
int main(){
    cin >> a >> b >> c >> d;
    cout << arr[f()];
    return 0;
}