#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, A, B=1;
string S;
int main(){
    cin >> N >> S;
    for (int i=0;i<S.size();i++){
        if (S[i]=='C')
            A++;
        else
            B++;
    }
    if (B==1)
        cout << A;
    else 
        cout << (A%B ? A/B+1 : A/B); 
    return 0;
}