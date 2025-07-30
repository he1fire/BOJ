#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, x, y, chk, len, mx;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for (int i=0;i<N;i++){
        cin >> y;
        if (x==0){
            x=y;
            continue;
        }
        if (x<y){
            if (chk==1)
                len++;
            else
                len=1;
            chk=1;
        }
        if (x>y){
            if (chk==-1)
                len++;
            else
                len=1;
            chk=-1;
        }
        x=y;
        mx=max(mx,len);
    }
    cout << mx+1;
    return 0;
}