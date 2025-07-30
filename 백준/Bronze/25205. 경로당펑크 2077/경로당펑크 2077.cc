#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N;
string S;
int main(){
    cin >> N >> S;
    string a="acdefgqrstvwxz";
    cout << (a.find(S[N-1])!=-1);
    return 0;
}