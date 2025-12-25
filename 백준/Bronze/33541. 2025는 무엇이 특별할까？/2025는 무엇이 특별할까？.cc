#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for (ll i=N+1;i<10000;i++){
        if ((i/100+i%100)*(i/100+i%100)==i){
            cout << i;
            return 0;
        }
    }
    cout << "-1";
    return 0;
}