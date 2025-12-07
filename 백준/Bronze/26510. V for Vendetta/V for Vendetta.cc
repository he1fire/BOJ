#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    while(cin >> N){
        for (ll i=0;i<N;i++){
            for (ll j=0;j<i;j++)
                cout << " ";
            cout << "*";
            if (i<N-1){
                for (ll j=0;j<2*(N-i)-3;j++)
                    cout << " ";
                cout << "*";
            }
            cout << "\n";
        }
    }
    return 0;
}