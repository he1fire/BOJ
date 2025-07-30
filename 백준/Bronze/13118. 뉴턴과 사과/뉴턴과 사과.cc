#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll p[4], x, y, r, chk;
int main(){
    for (int i=0;i<4;i++)
        cin >> p[i];
    cin >> x >> y >> r;
    for (int i=0;i<4;i++){
        if (x==p[i]){
            cout << i+1;
            chk=1;
        }
    }
    if (!chk)
        cout << "0";
    return 0;
}