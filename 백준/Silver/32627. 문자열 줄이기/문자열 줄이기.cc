#include <bits/stdc++.h>
#define ll long long
using namespace std;
string S;
ll N, M, arr[30][2], chk;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M >> S;
    for (auto i:S)
        arr[i-'a'][0]++;
    while (M--){
        while (arr[chk][1]>=arr[chk][0])
            chk++;
        arr[chk][1]++;
    }
    for (auto i:S){
        if (arr[i-'a'][1]==0)
            cout << i;
        else
            arr[i-'a'][1]--;
    }
    return 0;
}