#include <bits/stdc++.h>
#define ll long long
using namespace std;
string S;
string f(){
    string chk="aeiouy";
    if (S.size()>4 && S.substr(S.size()-2,S.size())=="or"){
        if (chk.find(S[S.size()-3])==string::npos)
            return S.substr(0,S.size()-2)+"our";
        return S;
    }
    return S;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    while (1){
        cin >> S;
        if (S=="quit!")
            break;
        cout << f() << "\n";
    }
    return 0;
}