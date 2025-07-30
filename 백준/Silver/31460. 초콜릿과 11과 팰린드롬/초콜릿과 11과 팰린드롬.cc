#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for (int i=0;i<N;i++){
        ll x;
        cin >> x;
        if (x==1)
            cout << "0\n";
        else{
            cout << "1";
            for (int i=0;i<x-2;i++)
                cout << "2";
            cout << "1\n";
        }
    }
    return 0;
}