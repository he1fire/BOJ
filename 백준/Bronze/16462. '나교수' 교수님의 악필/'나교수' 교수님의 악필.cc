#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, ans;
int main(){
    cin >> N;
    for (int i=0;i<N;i++){
        ll a;
        cin >> a;
        if (a!=100){
            if (a/10==6){
                a-=a/10*10;
                a+=90;
            }
            if (a%10==0 || a%10==6){
                a-=a%10;
                a+=9;
            }
        }
        ans+=a;
    }
    printf("%.0f",(double)ans/N+0.00001);
    return 0;
}