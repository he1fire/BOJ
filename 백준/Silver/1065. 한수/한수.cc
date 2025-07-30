#include <iostream>
using namespace std;
int main () {
    int N, sum=0, ans[1001]={0, };
    cin >> N;
    for (int i=1;i<100;i++){
        ans[i]=1;
        }
    for (int i=100;i<1000;i++){
        int a=0, b=0, c=0;
        a=i%10;
        b=(i/10)%10;
        c=i/100;
        if (b*2==a+c)
        ans[i]=1;
        }
    for (int i=1;i<=N;i++){
        if (ans[i]==1)
        sum++;
        }
    cout << sum;
    return 0;
    }