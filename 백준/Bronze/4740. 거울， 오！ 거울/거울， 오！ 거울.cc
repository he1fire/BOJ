#include <bits/stdc++.h>
#define ll long long
using namespace std;
string S;
int main(){
    while (1){
        getline(cin,S);
        reverse(S.begin(),S.end());
        if (S=="***")
            break;
        else
            cout << S << "\n";
    }
    return 0;
}