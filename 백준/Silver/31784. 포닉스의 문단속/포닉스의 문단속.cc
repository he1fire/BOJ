#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, M;
string S;
ll f(char c){
    return 26-(c-'A');
}
int main(){ 
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M >> S;
    for (int i=0;i<N;i++){
        if (S[i]!='A' && M>=f(S[i])){
            M-=f(S[i]);
            S[i]='A';
        }
    }
    if (M){
        M%=26;
        for (int i=N-1;i>=0;i--){
            while (M && S[i]!='Z'){
                M--;
                S[i]++;
            }
        }
    }
    cout << S;
    return 0;
}