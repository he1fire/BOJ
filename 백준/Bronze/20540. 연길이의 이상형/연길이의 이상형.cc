#include <bits/stdc++.h>
#define ll long long
using namespace std;
string S;
char arr[4][2]={{'I','E'},{'N','S'},{'T','F'},{'P','J'}};
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> S;
    for (ll i=0;i<4;i++){
        for (ll j=0;j<2;j++){
            if (arr[i][j]==S[i])
                continue;
            cout << arr[i][j];
        }
    }
    return 0;
}