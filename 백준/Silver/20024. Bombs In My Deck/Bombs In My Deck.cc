#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    double A, B, C, ans=1;
    cin >> A >> B >> C;
    while (C>0){
        if (B<=0){
            ans=0;
            break;
        }
        ans*=B/A;
        A--;
        B--;
        C-=5;
    }
    cout << 1-ans;
    return 0;
}