#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, M, ans=-1;
string arr[15];
ll f(ll x, ll y){
    ll ret=-1;
    for (int i=-9;i<=9;i++){
        for (int j=-9;j<=9;j++){
            ll chk=0;
            for (int k=0;k<=9;k++){
                if (x+i*k<0 || x+i*k>=N || y+j*k<0 || y+j*k>=M)
                    break;
                chk*=10;
                chk+=arr[x+i*k][y+j*k]-'0';
                if (sqrt(chk)==(ll)sqrt(chk))
                    ret=max(ret,chk);
            }
        }
    }
    return ret;
}
int main(){
    cin >> N >> M;
    for (int i=0;i<N;i++)
        cin >> arr[i];
    for (int i=0;i<N;i++){
        for (int j=0;j<M;j++){
            ans=max(ans,f(i,j));
        }
    }
    cout << ans;
    return 0;
}