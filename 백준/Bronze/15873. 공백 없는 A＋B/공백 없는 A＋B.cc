#include <bits/stdc++.h>
#define ll long long
using namespace std;
string S;
int main(){
    cin >> S;
    if (S.size()==2)
        cout << S[0]-'0'+S[1]-'0';
    else if (S.size()==3){
        if (S[1]=='0')
            cout << 10+S[2]-'0';
        else
            cout << 10+S[0]-'0';
    }
    else
        cout << "20";
    return 0;
}