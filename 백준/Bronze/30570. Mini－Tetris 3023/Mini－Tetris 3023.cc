#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll A, B, C;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> A >> B >> C;
    if (C>=2){
        C^=1;
        cout << A*2+B*2-1+(C-2)/2*3+4;
    }
    else
        cout << A*2;
    return 0;
}