#include <iostream>
#include <string>
using namespace std;
string arr[64];
int cnt1, cnt0;
void f(int x, int y, int z){
    cnt1=0, cnt0=0;
    for (int i=x;i<x+z;i++){
        for (int j=y;j<y+z;j++){
            if (arr[i][j]=='1')
                cnt1++;
            else
                cnt0++;
        }
    }
    if (cnt1==z*z)
        cout << "1";
    else if (cnt0==z*z)
        cout << "0";
    else{
        cout << "(";
        f(x,y,z/2);
        f(x,y+z/2,z/2);
        f(x+z/2,y,z/2);
        f(x+z/2,y+z/2,z/2);
        cout << ")";
    }
}
int main () {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
	int N;
    cin >> N;
    for (int i=0;i<N;i++)
        cin >> arr[i];
    for (int i=0;i<N;i++){
        for (int j=0;j<N;j++){
            if (arr[i][j]=='1')
                cnt1++;
            else
                cnt0++;
        }
    }
    if (cnt1==N*N)
        cout << "1";
    else if (cnt0==N*N)
        cout << "0";
    else{
        cout << "(";
        f(0,0,N/2);
        f(0,N/2,N/2);
        f(N/2,0,N/2);
        f(N/2,N/2,N/2);
        cout << ")";
    }
    return 0;
}