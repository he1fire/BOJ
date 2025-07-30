#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string S, arr;
    ll ans=0, tmp=0;
    while (cin >> S){
        arr+=S;
    }
    for (int i=0;i<arr.size();i++){
        if (arr[i]==','){
            ans+=tmp;
            tmp=0;
        }
        else{
            tmp*=10;
            tmp+=arr[i]-'0';
        }
    }
    ans+=tmp;
    cout << ans;
    return 0;
}