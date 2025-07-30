#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, r, c;
ll f(ll x, ll y, ll len){
    if (len==0) 
        return 0;
    if (r<x && c<y)
        return f(x-len/2,y-len/2,len/2);
    else if (r<x && c>=y)
        return pow(len,2)+f(x-len/2,y+len/2,len/2);
    else if (r>=x && c<y)
        return pow(len,2)*2+f(x+len/2,y-len/2,len/2);
    else if (r>=x && c>=y)
        return pow(len,2)*3+f(x+len/2,y+len/2,len/2);
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> r >> c;
    cout << f(1<<N, 1<<N, 1<<N);
    return 0;
}