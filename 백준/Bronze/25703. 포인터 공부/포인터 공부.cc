#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    cout << "int a;\n";
    for (ll i=1;i<=N;i++){
        cout << "int ";
        for (ll j=0;j<i;j++)
            cout << "*";
        cout << "ptr";
        if (i>1)
            cout << i;
        cout << " = &";
        if (i>1){
            cout << "ptr";
            if (i>2)
                cout << i-1;
            cout << ";\n";
        }
        else
            cout << "a;\n";
    }
    return 0;
}