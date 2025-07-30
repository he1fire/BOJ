#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N, a=0, b=0;
    string S;
    cin >> N >> S;
    for (int i=0;i<S.size();i++){
        if (S[i]=='e')
            a++;
        else
            b++;
    }
    if (a==b)
        cout << "yee";
    else if (a>b)
        cout << "e";
    else
        cout << "2";
    return 0;
}