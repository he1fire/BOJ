#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, M;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M;
    for (int i=0;i<N;i++){
        for (int j=0;j<M;j++){
            cout << i*M+j+1;
            if (j!=M-1)
                cout << " ";
        }
        cout << "\n";
    }
    return 0;
}