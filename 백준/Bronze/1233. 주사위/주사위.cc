#include<iostream>
using namespace std;
int main() {
    int sum[81]={0,};
    int s1, s2, s3;
    cin >> s1 >> s2 >> s3;
    for (int i=1;i<=s1;i++)
        {
        for (int j=1;j<=s2;j++)
            {
            for (int k=1;k<=s3;k++)
            sum[i+j+k]++;
            }
        }
    int Max=0, pos;
    for (int i=80;i>0;i--)
       if (Max<=sum[i])
        {
        Max=sum[i];
        pos=i;
        }
    cout << pos;
    return 0;
    }