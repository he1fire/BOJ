#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, M;
string S;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    while (N--){
        cin >> M;
        for (;M>=5;M-=5)
            cout << "++++ ";
        for (;M>0;M--)
            cout << "|";
        cout << "\n";
    }
    return 0;
}