#include<iostream>
using namespace std;
int main() {
    int in[999], num[999];
    int N, sum=0;
    cin >> N;
    int plus=1;
    for (int i=0;i<N;i++)
        {
        cin >> in[i];
        sum+=in[i]*plus;
        plus*=-1;
        }
    num[0]=sum/2;
    for (int i=1;i<N;i++)
    num[i]=in[i-1]-num[i-1];
    for (int i=0;i<N;i++)
    cout << num[i] << '\n';
    return 0;
    }