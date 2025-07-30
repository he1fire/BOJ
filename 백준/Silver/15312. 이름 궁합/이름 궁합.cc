#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll arr[26]={3, 2, 1, 2, 3, 3, 2, 3, 3, 2, 2, 1, 2, 2, 1, 2, 2, 2, 1, 2, 1, 1, 1, 2, 2, 1};
string A, B;
vector<ll> v;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> A >> B;
    for (int i=0;i<A.size();i++){
        v.push_back(arr[A[i]-'A']);
        v.push_back(arr[B[i]-'A']);
    }
    while (v.size()!=2){
        for (int i=0;i<v.size()-1;i++)
            v[i]=(v[i]+v[i+1])%10;
        v.pop_back();
    }
    cout << v[0] << v[1];
    return 0;
}