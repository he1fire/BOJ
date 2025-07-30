#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for (int i=0;i<N*2;i++){
        for (int j=1;j<=N;j++){
            if ((i+j)%2)
                cout << "*";
            else
                cout << " ";
        }
        cout << "\n";
    }
    return 0;
}