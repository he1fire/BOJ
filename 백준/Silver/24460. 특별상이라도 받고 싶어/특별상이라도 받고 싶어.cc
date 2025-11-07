#include <bits/stdc++.h>
#define ll unsigned long long
using namespace std;
ll N, arr[1050][1050];
ll f(ll x, ll y, ll len){
    if (len==1)
        return arr[x][y];
    else{
        vector<ll> v;
        v.push_back(f(x,y,len/2));
        v.push_back(f(x+len/2,y,len/2));
        v.push_back(f(x,y+len/2,len/2));
        v.push_back(f(x+len/2,y+len/2,len/2));
        sort(v.begin(),v.end());
        return v[1];
    }
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for (int i=0;i<N;i++){
        for (int j=0;j<N;j++)
            cin >> arr[i][j];
    }
    cout << f(0,0,N);
    return 0;
}