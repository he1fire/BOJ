#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, ans=0, cnt=0;
string S;
int main(){
    cin >> N >> S;
    for (int i=0;i<N;i++){
        if (S[i]=='O'){
            ans+=i+1+cnt;
            cnt++;
        }
        else
            cnt=0;
    }
    cout << ans;
    return 0;
}