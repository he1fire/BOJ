#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, mn, mncnt, mx;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> mn;
    mx=mn;
    cin >> N;
    while (N--){
        ll a;
        cin >> a;
        if (a<mn)
            mn++;
        else if (a==mn)
            mncnt++;
        else if (a>mn && a<=mn+mncnt){
            mncnt=mn+mncnt-a+1;
            mn=a;
        }
        if (a<=mx)
            mx++;
    }
    cout << mn << " " << mx;
    return 0;
}