#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll a=-1000001, b, cnt=1;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    while (cin >> b){
        if (a>b)
            cnt=0;
        a=b;
    }
    cout << (cnt ? "Good" : "Bad");
    return 0;
}