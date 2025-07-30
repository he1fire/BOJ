#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll a, b;
    cin >> a >> b;
    for (int i=-1000;i<=1000;i++){
        for (int j=i;j<=1000;j++){
            if (-i-j==a*2 && i*j==b){
                if (j==i)
                    cout << j;
                else
                    cout << i << " " << j;
            }
        }
    }
    return 0;
}