#include <bits/stdc++.h>
#define ll long long
using namespace std;
string S;
ll ans;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> S;
    sort(S.begin(),S.end());
    do{
        ll tmp=0;
        for (int i=1;i<S.size()-1;i++){
            if (S[i-1]==S[i] || S[i]==S[i+1]){
                tmp=1;
                break;
            }
        }
        if (tmp)
            continue;
        ans++;
    }while(next_permutation(S.begin(),S.end()));
    cout << ans;
    return 0;
}