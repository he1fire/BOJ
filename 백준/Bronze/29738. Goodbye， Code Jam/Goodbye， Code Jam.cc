#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for (int i=1;i<=N;i++){
        ll a;
        cin >> a;
        cout << "Case #" << i << ": ";
        if (a<=25)
            cout << "World Finals\n";
        else if (a<=1000)
            cout << "Round 3\n";
        else if (a<=4500)
            cout << "Round 2\n";
        else
            cout << "Round 1\n";
    }
    return 0;
}