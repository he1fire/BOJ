#include <bits/stdc++.h>
#define ll long long
using namespace std;
string S;
ll arr[30];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    getline(cin,S);
    for (auto x:S){
        if ('a'<=x && x<='z')
            x=x-'a'+'A';
        if ('A'<=x && x<='Z')
            arr[x-'A']++;
    }
    for (ll i=0;i<26;i++){
        cout << (char)(i+'A') << " | ";
        while (arr[i]--)
            cout << "*";
        cout << "\n";
    }
    return 0;
}