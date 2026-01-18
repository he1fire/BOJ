#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, arr[15], x, y, chk[8][3]={{1,2,3},{4,5,6},{7,8,9},{1,4,7},{2,5,8},{3,6,9},{1,5,9},{3,5,7}};
ll f(){
    for (ll i=0;i<8;i++){
        if (arr[chk[i][0]]!=0 && arr[chk[i][0]]==arr[chk[i][1]] && arr[chk[i][0]]==arr[chk[i][2]])
            return arr[chk[i][0]];
    }
    return 0;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for (ll i=0;i<9;i++){
        cin >> x >> y;
        arr[(x-1)*3+y]=N;
        if (f()){
            cout << f();
            return 0;
        }
        N=N%2+1;
    }
    cout << "0";
    return 0;
}