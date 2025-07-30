#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, x=1;
int main(){
    ios::sync_with_stdio(0);
    cin.tie();
    cin >> N;
    while (N>x*10){
        if ((N/x)%10>=5)
            N+=x*10;
        N-=N%(x*10);
        x*=10;
    }
    cout << N;
    return 0;
}