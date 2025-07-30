#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, arr[130][130], cnt1, cnt0;
void f(ll x, ll y, ll z){
    ll chk0=0, chk1=0;
    for (int i=x;i<x+z;i++){
        for (int j=y;j<y+z;j++){
            if (arr[i][j]==1)
                chk1++;
            else
                chk0++;
        }
    }
    if (chk0==z*z)
        cnt0++;
    else if (chk1==z*z)
        cnt1++;
    else{
        f(x,y,z/2);
        f(x,y+z/2,z/2);
        f(x+z/2,y,z/2);
        f(x+z/2,y+z/2,z/2);
    }
}
int main(){
    cin >> N;
    for (int i=0;i<N;i++){
        for (int j=0;j<N;j++)
            cin >> arr[i][j];
    }
    f(0,0,N);
    cout << cnt0 << "\n" << cnt1;
    return 0;
}