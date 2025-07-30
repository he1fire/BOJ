#include <bits/stdc++.h>
#define ll long long
using namespace std;
string S;
ll x;
int main(){
    cin >> S;
    for (int i=1;i*i<=S.size();i++){
        if (S.size()%i==0)
            x=i;
    }
    for (int i=0;i<x;i++){
        for (int j=i;j<S.size();j+=x)
            cout << S[j];
    }
    return 0;
}