#include <bits/stdc++.h>
#define ll long long
using namespace std;
int N, M, isVowel[26];
vector<char> v;
char P[16];
void backtrack(int pos, int prev, int consonant, int vowel){
    if(pos == N){
        if(consonant>=2 && vowel>=1)
            puts(P);
        return;
    }
    for(int i=prev+1;i<M;i++){
        P[pos]=v[i];
        backtrack(pos+1, i, consonant+!isVowel[v[i]-'a'], vowel+isVowel[v[i]-'a']);
    }
}
int main() {
    cin >> N >> M;
    for(int i=0;i<M;i++){
        char a;
        cin >> a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    isVowel[0]=isVowel[4]=isVowel[8]=isVowel[14]=isVowel[20]=1;
    backtrack(0, -1, 0, 0);
    return 0;
}