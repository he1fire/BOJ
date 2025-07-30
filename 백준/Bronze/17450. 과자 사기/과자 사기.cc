#include <bits/stdc++.h>
#define ll long long
using namespace std;
string S="SNU";
ll ans;
double cnt;
int main(){
    for (int i=0;i<3;i++){
        double a, b;
        cin >> a >> b;
        a*=10, b*=10;
        if (a>=5000)
            a-=500;
        if (b/a>cnt){
            cnt=b/a;
            ans=i;
        }
    }
    cout << S[ans];
    return 0;
}