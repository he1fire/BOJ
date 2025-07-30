#include <bits/stdc++.h>
#define ll long long
#define INF (1e9)+7
using namespace std;
vector<string> v;
int main(void){ 
    ios::sync_with_stdio(0);
    cin.tie(0);
    for (int i=0;i<3;i++){
        string S;
        cin >> S;
        v.push_back(S);
    }
    sort(v.begin(),v.end());
    if (v[0][0]=='k' && v[1][0]=='l' && v[2][0]=='p')
        cout << "GLOBAL";
    else
        cout << "PONIX";
    return 0;
}