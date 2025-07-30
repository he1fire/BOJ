#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, R, B;
char c;
int main(){
    cin >> N;
    for (int i=0;i<N;i++){
        char a;
        cin >> a;
        if (a=='R' && (!i || (i && c!='R')))
            R++;
        if (a=='B' && (!i || (i && c!='B')))
            B++;
        c=a;
    }
    cout << min(R,B)+1;
    return 0;
}