#include <bits/stdc++.h>
#define ll long long
using namespace std;
string S[3]={"Soongsil","Korea","Hanyang"};
int main(){
    ll a, b, c;
    cin >> a >> b >> c;
    if (a+b+c>=100)
        cout << "OK";
    else{
        if (a<b && a<c)
            cout << S[0];
        else if (b<c && b<a)
            cout << S[1];
        else
            cout << S[2];
    }
    return 0;
}