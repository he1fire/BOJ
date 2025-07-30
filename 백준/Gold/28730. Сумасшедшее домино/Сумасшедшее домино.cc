#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for (int i=0;i<N;i++){
        for (int j=0;j<N;j++){
            if (i==0 && j%2)
                cout << '#';
            else if (i==N-1 && N%2==0 && j%2)
                cout << '#';
            else if (i==N-1 && N%2 && j%2==0)
                cout << '#';
            else
                cout << ".";
        }
        cout << "\n";
    }
    return 0;
}