#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, A, B;
ll *g(char c){
    if (c=='A')
        return &A;
    else
        return &B;
}
void f(char x, char y){
    if (N==3)
        *g(x)=(*g(x))+(*g(y));
    else if (N==4)
        *g(x)=(*g(x))*(*g(y));
    else if (N==5)
        *g(x)=(*g(x))-(*g(y));
    else if (N==6)
        *g(x)=(*g(x))/(*g(y));
}
int main(){
    ios::sync_with_stdio(0);
    while (cin >> N){
        char x, y;
        ll n;
        if (N==1){
            cin >> x >> n;
            *g(x)=n;
        }
        else if (N==2){
            cin >> x;
            cout << *g(x) << "\n";
        }
        else if (N==7)
            break;
        else{
            cin >> x >> y;
            f(x,y);
        }
    }
    return 0;
}