#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N;
string S;
ll f(string x){
    reverse(x.begin(),x.end());
    string a, b;
    a=b=S+x;
    reverse(b.begin(),b.end());
    if (a==b){
        cout << a << "\n";
        return 1;
    }
    return 0;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    while (N--){
        cin >> S;
        for (int i=0;i<=S.size();i++){
            if (f(S.substr(0,i)))
                break;
        }
    }
    return 0;
}