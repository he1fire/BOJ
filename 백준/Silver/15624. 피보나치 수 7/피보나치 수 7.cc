#include <bits/stdc++.h>
#define ll long long
#define INF 1000000007
using namespace std;
ll N, arr[1000005]={0,1};
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for (int i=2;i<=N;i++)
        arr[i]=(arr[i-1]+arr[i-2])%INF;   
    cout << arr[N];
    return 0;
}