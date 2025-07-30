#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, arr[100];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    arr[2]=arr[1]=1;
    for (int i=3;i<=81;i++)
        arr[i]=arr[i-1]+arr[i-2];
    cin >> N;
    cout << arr[N]*2+arr[N+1]*2;
    return 0;
}