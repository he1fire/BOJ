#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, arr[1000005];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for (int i=0;i<N;i++){
        string s;
        cin >> s;
        if (s.size()>=7)
            continue;
        ll x=stol(s);
        if (x>=0)
            arr[x]=1;
    }
    for (int i=0;i<=N;i++){
        if (!arr[i]){
            cout << i;
            break;
        }
    }
    return 0;
}