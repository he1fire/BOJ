#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N[2], mx, mn;
int main(){
    cin >> N[0] >> N[1];
    for (int i=1;N[0] || N[1];i*=10){
        for (int j=0;j<2;j++){
            ll tmp=N[j]%10;
            if (tmp==5 || tmp==6){
                mn+=5*i;
                mx+=6*i;
            }
            else{
                mn+=tmp*i;
                mx+=tmp*i;
            }
            N[j]/=10;
        }
    }
    cout << mn << " " << mx;
    return 0;
}