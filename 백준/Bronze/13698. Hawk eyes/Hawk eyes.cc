#include <bits/stdc++.h>
#define ll long long
#define INF 987654321
#define MOD 1000000007
using namespace std;
typedef pair<ll,ll> pll;
string S;
ll arr[5]={0,-1,0,0,1};
pll dir[6]={{1,2},{1,3},{1,4},{2,3},{2,4},{3,4}};
int main(){
    cin >> S;
    for (auto i:S){
        int x=i-'A';
        swap(arr[dir[x].first],arr[dir[x].second]);
    }
    for (int i=1;i<5;i++){
        if (arr[i]==-1)
            cout << i << "\n";
    }
    for (int i=1;i<5;i++){
        if (arr[i]==1)
            cout << i << "\n";
    }
    return 0;
}