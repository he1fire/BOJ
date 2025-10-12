#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    while (cin >> N){
        ll x=0, y=0;
        if (!N)
            break;
        for (int i=0;i<N;i++){
            ll a;
            cin >> a;
            if (a)
                y++;
            else
                x++;
        }
        cout << "Mary won " << x << " times and John won "<< y << " times\n";
    }
    return 0;
}