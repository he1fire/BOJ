#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for (int i=0;i<N*5;i++){
        if (i<N){
            for (int j=0;j<N*5;j++)
                cout << "@";
        }
        else {
            for (int j=0;j<N;j++)
                cout << "@";
        }
        cout << "\n";
    }
    return 0;
}