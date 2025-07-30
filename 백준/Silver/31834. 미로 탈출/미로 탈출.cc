#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll T, N, S, E;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> T;
    while(T--){
        cin >> N >> S >> E;
        if(S==1 && E==N)
            cout << "0\n";
        else if(S==N && E==1)
            cout << "0\n";
        else if(S==1 || S==N)
            cout << "1\n";
        else if(abs(S-E)==1)
            cout << "1\n";
        else
            cout << "2\n";
    }   
}