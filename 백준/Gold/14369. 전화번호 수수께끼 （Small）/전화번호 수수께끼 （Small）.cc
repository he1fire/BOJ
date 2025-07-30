#include <bits/stdc++.h>
#define ll long long
using namespace std;
typedef pair<ll,char> pll;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll N;
    cin >> N;
    for (int i=1;i<=N;i++){
        string S, ch[10]={"ZERO","ONE","TWO","THREE","FOUR","FIVE","SIX","SEVEN","EIGHT","NINE"};
        ll count[30]={0,};
        ll arr[10]={0,};
        pll turn[10]={{0,'Z'},{2,'W'},{4,'U'},{6,'X'},{8,'G'},{1,'O'},{3,'H'},{5,'F'},{7,'S'},{9,'I'}};
        cin >> S;
        for (int j=0;j<S.size();j++)
            count[S[j]-'A']++;
        for (auto j: turn){
            ll x=count[j.second-'A'];
            arr[j.first]=x;
            for (auto k:ch[j.first]){
                count[k-'A']-=x;
            }
        }
        cout << "Case #" << i << ": ";
        for (int j=0;j<10;j++){
            for (int k=0;k<arr[j];k++){
                cout << j;
            }
        }
        cout << "\n";
    }
    return 0;
}