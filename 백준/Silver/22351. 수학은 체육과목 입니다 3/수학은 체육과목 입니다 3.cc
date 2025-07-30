#include <bits/stdc++.h>
#define ll long long
using namespace std;
string S;
ll ans;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> S;
    for (int i=1;i<S.size();i++){
        int a=0, cnt=0, j;
        string A;
        for (j=0;j<i;j++)
            A+=S[j];
        a=stoi(A);
        A.clear();
        for (j=a;A.size()<S.size();j++)
            A+=to_string(j);
        if (S==A){
            ans=1;
            cout << a << " " << j-1;
            break;
        }
    }
    if (!ans)
        cout << S << " " << S;
    return 0;
} 