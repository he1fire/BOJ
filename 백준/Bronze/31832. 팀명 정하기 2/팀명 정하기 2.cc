#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N;
ll f(string x){
    ll A=0, a=0, e=0;
    for (int i=0;i<x.size();i++){
        if (x[i]>='a' && x[i]<='z')
            a++;
        else if (x[i]>='A' && x[i]<='Z')
            A++;
        if (x[i]>='0' && x[i]<='9')
            e++;
    }
    if (A<=a && e<x.size() && x.size()<=10)
        return 1;
    else
        return 0;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for (int i=0;i<N;i++){
        string s;
        cin >> s;
        if (f(s))
            cout << s;
    }
    return 0;
}