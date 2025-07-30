#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, ans, arr[8]={4,16,20,37,42,58,89,145};
int main(){
    ios::sync_with_stdio(0);
    cin.tie();
    cin >> N;
    ll x=N;
    while (1){
        int y=0;
        while (x){
            y+=pow(x%10,2);
            x/=10;
        }
        x=y;
        if (find(arr,arr+8,x)!=arr+8){
            ans=0;
            break;
        }
        if (x==1){
            ans=1;
            break;
        }
    }
    ans ? cout << "HAPPY" : cout << "UNHAPPY";
    return 0;
}