#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    while (N--){
        ll a, b[10]={0}, c=0;
        cin >> a;
        while (a){
            b[a%10]++;
            a/=10;
        }
        for (auto i:b){
            if (i)
                c++;
        }
        cout << c << "\n";
    }
    return 0;
}