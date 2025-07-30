#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    string S;
    int N=0, ans=1;
    cin >> S;
    for (int i=0;i<S.size();i++){
        if (S[i]>='a' && S[i]<='z')
            N+=S[i]-'a'+1;
        else
            N+=S[i]-'A'+27;
    }
    for (int i=2;i*i<=N;i++){
        if (N%i==0){
            ans=0;
            break;
        }
    }
    ans ? cout << "It is a prime word." : cout << "It is not a prime word.";
    return 0;
}