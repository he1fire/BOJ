#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, cnt;
char S[1005];
int recursion(const char *s, int l, int r){
    cnt++;
    if(l >= r) return 1;
    else if(s[l] != s[r]) return 0;
    else return recursion(s, l+1, r-1);
}
int isPalindrome(const char *s){
    return recursion(s, 0, strlen(s)-1);
}
int main(){
    cin >> N;
    while (N--){
        cnt=0;
        cin >> S;
        cout << isPalindrome(S) << " ";
        cout << cnt << "\n";
    }
    return 0;
}
