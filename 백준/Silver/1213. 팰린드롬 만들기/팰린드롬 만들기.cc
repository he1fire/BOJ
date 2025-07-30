#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll arr[30]={0}, chk=0;
    string S;
    cin >> S;
    for (int i=0;i<S.size();i++){
        arr[S[i]-'A']++;
    }
    for (int i=0;i<26;i++){
        if (arr[i]%2)
            chk++;
    }
    if (chk>1){
        cout << "I'm Sorry Hansoo";
    }
    else{
        for (int i=0;i<26;i++){
            for (int j=0;j<arr[i]/2;j++)
                cout << (char)(i+'A');
        }
        for (int i=0;i<26;i++){
            if (arr[i]%2)
                cout << (char)(i+'A');
        }
        for (int i=25;i>=0;i--){
            for (int j=0;j<arr[i]/2;j++)
                cout << (char)(i+'A');
        }
    }
    return 0;
}