#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, x, y;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> x >> y;
    if (N==1)
        cout << "0";
    else if ((x==1 || x==N) && (y==1 || y==N))
        cout << "2";
    else if  (x==1 || x==N || y==1 || y==N)
        cout << "3";
    else
        cout << "4";
    return 0;
}