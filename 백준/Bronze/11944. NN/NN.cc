#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll M;
char N[5];
string S;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M;
    ll a=atoi(N);
    for (int i=0;i<a;i++){
        S+=N;
    }
    if (S.size()<M)
        cout << S;
    else{
        for (int i=0;i<M;i++)
            cout << S[i];
    }
    return 0;
}