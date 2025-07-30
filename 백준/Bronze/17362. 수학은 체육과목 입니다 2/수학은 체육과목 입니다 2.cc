#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin >> N;
    if (N%8==1)
        cout << "1";
    else if (N%8==0 || N%8==2)
        cout << "2";
    else if (N%8==3 || N%8==7)
        cout << "3";
    else if (N%8==4 || N%8==6)
        cout << "4";
    else
        cout << "5";
    return 0;
}
