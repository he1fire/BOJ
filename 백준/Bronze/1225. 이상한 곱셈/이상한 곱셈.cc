#include <iostream>
using namespace std;
int main () {
    char A[10001]={0, }, B[10001]={0, };
    long long a=0, b=0;
    cin >> A >> B;
    for (int i=0;A[i]!=0;i++)
    a+=A[i]-'0';
    for (int j=0;B[j]!=0;j++)
    b+=B[j]-'0';
    cout << a*b;
    return 0;
    }