#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, arr[2][30];
string a, b;
ll f(){
    ll ret=1;
    fill(&arr[0][0],&arr[1][30],0);
    for (int i=0;i<a.size();i++)
        arr[0][a[i]-'a']++;
    for (int i=0;i<b.size();i++)
        arr[1][b[i]-'a']++;
    for (int i=0;i<30;i++){
        if (arr[0][i]!=arr[1][i])
            ret=0;
    }
    return ret;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    while (N--){
        cin >> a >> b;
        cout << a << " & " << b << " are " << (f() ? "" : "NOT ") << "anagrams.\n";
    }
    return 0;
}