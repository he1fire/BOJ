#include <bits/stdc++.h>
#define ll long long
using namespace std;
string S;
ll N, L, R;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> S >> N;
    for (auto x:S){
        if (x=='L')
            L++;
        else if (x=='R')
            R++;
    }
    if (L && R)
        cout << "YES";
    else if (L && N<=-L)
        cout << "YES";
    else if (R && N>=R)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}