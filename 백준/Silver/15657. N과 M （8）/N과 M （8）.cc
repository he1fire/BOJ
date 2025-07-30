#include <bits/stdc++.h>
#define ll long long
using namespace std;
vector<int> v, arr;
int N, M;
void backtrack(int x, int cost){
    if (cost==M){
        for (int i=0;i<M;i++)
            cout << v[i] << " ";
        cout << "\n";
        return;
    }
    for (int i=x;i<N;i++){
        v.push_back(arr[i]);
        backtrack(i,cost+1);
        v.pop_back();
    }
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M;
    for (int i=0;i<N;i++){
        int a;
        cin >> a;
        arr.push_back(a);
    }
    sort(arr.begin(),arr.end());
    backtrack(0,0);
    return 0;
}