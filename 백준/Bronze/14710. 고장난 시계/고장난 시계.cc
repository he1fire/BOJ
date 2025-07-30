#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, M;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M;
    N*=2;
    M*=2;
    for (int i=0;i<720;i++){
        ll a=0, b=0;
        a=i;
        b=(i*12)%720;
        if (a==N && b==M){
            cout << "O";
            return 0;
        }
    }
    cout << "X";
    return 0;
}