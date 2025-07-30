#include <bits/stdc++.h>
#define ll long long
#define ld double
using namespace std;
ll N;
double a, b, ans;
vector<ld> v;
int main(){
    cin >> N >> a >> b;
    for (ll i=N;1;i+=N){
        if (a>=100){
            ld x=1;
            for (int i=0;i<v.size();i++)
                x*=v[i];
            ans+=i*x;
            break;
        }
            
        ld x=1;
        for (int i=0;i<v.size();i++)
            x*=v[i];
        ans+=i*x*(a/100);
        v.push_back(1-(a/100));
        a=a+a*(b/100);
    }
    printf("%lf", ans);
    return 0;
} 