#include <bits/stdc++.h>
#define ll long long
#define INF (1e9)+7
using namespace std;
vector<vector<ll>> arr;
vector<ll> v, N;
ll ans=INF;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    for (int i=1;i<=9;i++)
        v.push_back(i);
    do{
        ll tmp=1, dir[8][3]={{0,1,2},{3,4,5},{6,7,8},{0,3,6},{1,4,7},{2,5,8},{0,4,8},{2,4,6}};
        for (int i=0;i<8;i++){
            ll x=dir[i][0], y=dir[i][1], z=dir[i][2];
            if (v[x]+v[y]+v[z]!=15)
                tmp=0;
        }
        if (tmp)
            arr.push_back(v);
    }while (next_permutation(v.begin(),v.end()));
    for (int i=0, a;i<9;i++){
        cin >> a;
        N.push_back(a);
    }
    for (int i=0;i<arr.size();i++){
        ll tmp=0;
        for (int j=0;j<9;j++)
            tmp+=abs(N[j]-arr[i][j]);
        ans=min(ans,tmp);
    }
    cout << ans;
    return 0;
}