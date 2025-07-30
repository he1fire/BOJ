#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for (int i=1;i<=N/2;i++){
        cout << i << " ";
        if (i!=N-i)
            cout << N-i << " ";
    }
    cout << N;
    return 0;
}