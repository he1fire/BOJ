#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    while (N--){
        ll x;
        cin >> x;
        x++;
        while (1){
            string s=to_string(x);
            if (s.find('0')==string::npos)
                break;
            x++;
        }
        cout << x << "\n";
    }
    return 0;
}