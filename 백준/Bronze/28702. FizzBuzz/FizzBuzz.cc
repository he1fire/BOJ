#include <bits/stdc++.h>
#define ll long long
using namespace std;
string S[3];
ll ans;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    for (int i=0;i<3;i++)
        cin >> S[i];
    for (int i=0;i<3;i++){
        if (S[i][0]!='B' && S[i][0]!='F')
            ans=stol(S[i])+3-i;
    }
    if (ans%3==0 && ans%5==0)
        cout << "FizzBuzz";
    else if (ans%3==0)
        cout << "Fizz";
    else if (ans%5==0)
        cout << "Buzz";
    else
        cout << ans;
    return 0;
}