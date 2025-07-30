#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, M, ans;
string S[2];
void f(){
    if (S[0].size()!=S[1].size())
        (S[0].size()<S[1].size()) ? (cout << S[0]) : (cout << S[1]);
    else
        (S[0]<S[1]) ? (cout << S[0]) : (cout << S[1]);
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for (int k=0;k<2;k++){
        for (int i=0;i<N;i++){
            string a;
            cin >> a;
            S[k]+=a;
        }
    }
    f();
    return 0;
}