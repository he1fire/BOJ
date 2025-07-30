#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll T;
string S;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> T;
    cin.ignore();
    while (T--){
        getline(cin,S);
        if (S[0]>='a' && S[0]<='z')
            cout << (char)(S[0]-'a'+'A');
        else
            cout << S[0];
        for (int i=1;i<S.size();i++)
            cout << S[i];
        cout << "\n";
    }
    return 0;
}