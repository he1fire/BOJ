#include <bits/stdc++.h>
#define ll long long
using namespace std;
string S1, S2;
ll chk;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> S1;
    S2=S1;
    reverse(S2.begin(),S2.end());
    if (S1==S2){
        for (int i=1;i<S1.size();i++){
            if (S1[i]!=S1[i-1]){
                chk=1;
                break;
            }
        }
        chk ? cout << S1.size()-1 : cout << "-1";
    }
    else
        cout << S1.size();
    return 0;
}