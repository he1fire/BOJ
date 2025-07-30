#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll T, N;
int main(){
    cin >> T;
    while (T--){
        ll x=1;
        cin >> N;
        while (N>x*10){
            if ((N/x)%10>=5)
                N+=x*10;
            N-=N%(x*10);
            x*=10;
        }
        cout << N << "\n";
    }
    return 0;
}