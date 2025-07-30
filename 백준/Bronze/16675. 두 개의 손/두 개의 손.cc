#include <bits/stdc++.h>
#define ll long long
using namespace std;
int f(char x, char y){
    if ((x=='R' && y=='P') || (x=='P' && y=='S') || (x=='S' && y=='R'))
        return 1;
    return 0;
}
int main(){
    char a, b, c, d;
    cin >> a >> b >> c >> d;
    if (a==b && (f(a,c) || f(a,d)))
        cout << "TK";
    else if (c==d && (f(c,a) || f(c,b)))
        cout << "MS";
    else
        cout << "?";
    return 0;
}