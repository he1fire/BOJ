#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll N;
    cin >> N;
    while (N--){
        string S;
        cin >> S;
        if (S[S.size()/2]==S[S.size()/2-1])
            cout << "Do-it\n";
        else
            cout << "Do-it-Not\n";
    }
    return 0;
}