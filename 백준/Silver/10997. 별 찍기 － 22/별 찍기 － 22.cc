#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N;
char arr[400][400];
void f(ll x, ll y, ll lenx, ll leny){
    if (!(x%2)){
        for (int i=0;i<lenx;i++){
            arr[x][y+i]='*';
            arr[x+leny-1][y+i]='*';
        }
        for (int i=0;i<leny;i++){
            arr[x+i][y]='*';
            arr[x+i][y+lenx-1]='*';
        }
        if (x<(N*4-3)/2)
            arr[x+1][y+lenx-1]=' ';
    }
    else
        arr[x+1][y+lenx-1]='*';
    if (x<(N*4-3)/2)
        f(x+1,y+1,lenx-2, leny-2);
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for (int i=0;i<4*N-1;i++){
        for (int j=0;j<4*N-3;j++)
            arr[i][j]=' ';
    }
    f(0,0,4*N-3, 4*N-1);
    if (N==1){
        cout << "*";
        return 0;
    }
    for (int i=0;i<4*N-1;i++){
        for (int j=0;j<4*N-3;j++){
            cout << arr[i][j];
            if (i==1)
                break;
        }
        cout << "\n";
    }
    return 0;
}