#include <bits/stdc++.h>
#define ll long long
using namespace std;
string S;
ll N;
int main(){
    cin >> N;
    while (N--){
        string chk;
        cin >> S;
        chk=S;
        sort(chk.rbegin(),chk.rend());
        if (chk!=S)
            next_permutation(S.begin(),S.end());
        cout << S << "\n";
    }
    return 0;
}