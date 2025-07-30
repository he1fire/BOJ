#include <bits/stdc++.h>
#define ll long long
using namespace std;
double N, M;
int main(){
    for (int i=0;i<20;i++){
        string a, b, c;
        double x=0;
        ll y;
        cin >> a >> b >> c;
        if (c!="P"){
            y=b[0]-'0';
            if (c[0]=='F')
                x=0;
            else {
                x+='A'-c[0]+4;
                if (c[1]=='+')
                    x+=0.5;
            }
            N+=x*y;
            M+=y;
        }
    }
    printf("%lf", N/M);
    return 0;
}