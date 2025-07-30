#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, cnt, ans;
string S;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> S;
    for (int i=0;i<N;i++){
        if (S[i]=='2'){
            cnt++;
            ans+=cnt*(cnt+1)/2;
        }
        else
            cnt=0;
    }
    cout << ans;
}