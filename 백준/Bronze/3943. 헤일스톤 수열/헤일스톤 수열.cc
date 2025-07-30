#include<stdio.h>
#include<algorithm>
using namespace std;
#define ull unsigned long long
ull dp[100001];
ull f(ull n) {
    if (n<=100000&&dp[n])
    return dp[n];
    ull ret;
    if (n%2==0)
    ret=f(n/2);
    else
    ret=f(n*3+1);
    ret=max(ret,n);
    if (n<=100000)
    dp[n]=ret;
    return ret;
    }
int main(){
    dp[1]=1;
    int T;
    scanf("%d", &T);
    while(T--)
        {
        int N;
        scanf("%d", &N);
        printf("%llu\n", f(N));
        }
    return 0;
    }