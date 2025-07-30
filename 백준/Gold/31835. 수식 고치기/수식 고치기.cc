#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, M, arr[2005];
char c;
ll check(){
    bool ret=arr[0];
    for(int i=2;i<N;i+=2){
        if(arr[i-1]==0)
            ret=(ret&arr[i]);
        else
            ret=(ret|arr[i]);
    }
    return ret;
}
ll f(){
    ll ret=0;
    if(check()==M)
        return 0;
    for(int i=0;i<N;i++){
        arr[i]=!arr[i];
        if(check()==M)
            return 1;
        arr[i]=!arr[i];
    }
    return 2;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for(int i=0;i<N;i++){
        cin >> c;
        if(i%2==0)
            arr[i]=(c=='T'); 
        else
            arr[i]=(c=='|');
    }
    cin >> c;
    M=(c=='T');
    cout << f();
    return 0;
}