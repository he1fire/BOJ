#include <bits/stdc++.h>
#define ll long long
using namespace std;int main(){
    ios::sync_with_stdio(0);
    int a, b, c, d, e, f, ans1=0, ans2=0;
    scanf("%d:%d:%d",&a,&b,&c);
    scanf("%d:%d:%d",&d,&e,&f);
    ans1=a*3600+b*60+c;
    ans2=d*3600+e*60+f;
    if (ans2<=ans1)
        ans2+=86400;
    printf("%02d:%02d:%02d",(ans2-ans1)/3600,((ans2-ans1)/60)%60,(ans2-ans1)%60);
    return 0;
}