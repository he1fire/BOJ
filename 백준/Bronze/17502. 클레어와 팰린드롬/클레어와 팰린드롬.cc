#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N;
string S;
int main(){
    cin >> N >> S;
    for (int i=0;i<N;i++){
        if (S[i]=='?'){
            if (S[N-i-1]!='?')
                S[i]=S[N-i-1];
            else
                S[i]='a',S[N-i-1]='a';
        }
    }
    cout << S;
    return 0;
}