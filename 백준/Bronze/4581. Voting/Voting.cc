#include <bits/stdc++.h>
#define ll long long
using namespace std;
string S;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    while (cin >> S){
        ll y=0, n=0, cnt=0;
        if (S=="#")
            break;
        for (auto x:S){
            if (x=='Y')
                y++;
            else if (x=='N')
                n++;
            else if (x=='A')
                cnt++;
        }
        if (cnt>=(S.size()+1)/2)
            cout << "need quorum\n";
        else if (y==n)
            cout << "tie\n";
        else if (y>n)
            cout << "yes\n";
        else
            cout << "no\n";
    }
    return 0;
}