#include <bits/stdc++.h>
#define ll long long
using namespace std;
string S;
ll arr[1005], ans;
void f(ll len){
    for (int i=1;i+len-1<=S.size();i++){
        if (arr[i+len/2-1]-arr[i-1]==arr[i+len-1]-arr[i+len/2-1])
            ans=len;
    }
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> S;
    for (int i=1;i<=S.size();i++)
        arr[i]=S[i-1]-'0'+arr[i-1];
    for (int i=1;i*2<=S.size();i++)
        f(i*2);
    cout << ans;
    return 0;
}