#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, arr[15][25];
string S;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    while (N--){
        cin >> S;
        if (S.size()==2)
            arr[S[0]-'A'][S[1]-'0']=1;
        else
            arr[S[0]-'A'][(S[1]-'0')*10+(S[2]-'0')]=1;
    }
    for (ll i=0;i<10;i++){
        for (ll j=1;j<=20;j++)
            cout << (arr[i][j] ? 'o' : '.');
        cout << "\n";
    }
    return 0;
}