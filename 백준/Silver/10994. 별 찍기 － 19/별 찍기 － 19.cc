#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N;
char arr[400][400];
void f(ll x, ll y, ll len){
    if (!(x%2)){
        for (int i=0;i<len;i++){
            arr[x][y+i]='*';
            arr[x+i][y]='*';
            arr[x+len-1][y+i]='*';
            arr[x+i][y+len-1]='*';
        }
    }
    if (x<(N*4-3)/2)
        f(x+1,y+1,len-2);
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for (int i=0;i<4*N-3;i++){
        for (int j=0;j<4*N-3;j++)
            arr[i][j]=' ';
    }
    f(0,0,4*N-3);
    for (int i=0;i<4*N-3;i++){
        for (int j=0;j<4*N-3;j++)
            cout << arr[i][j];
        cout << "\n";
    }
    return 0;
}