#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, mx, idx1, idx2;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for (int i=1;i<=N;i++){
        ll a;
        cin >> a;
        if (a>mx){
            mx=a;
            idx1=idx2=i;
        }
        else if (a==mx)
            idx2=i;
    }
    if (N-idx2>idx1-1)
        cout << "R";
    else if (N-idx2==idx1-1)
        cout << "X";
    else
        cout << "B";
    return 0;
}