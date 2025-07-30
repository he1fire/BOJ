#include<iostream>
using namespace std;
int main() {
    int N, M;
    cin >> N >> M;
    N%=M;
    if (N==0)
    cout << 0;
    else
    {
     int K = 1;
     for (int i=100;i>=2;i--)
         {
         if (N%i==0 && M%i==0)
             {
             N/=i;
             M/=i;
             K=i;
             }
         }
    cout << (M-1)*K;
    }
    return 0;
    }