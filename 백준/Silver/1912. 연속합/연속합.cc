#include <iostream>
#include <algorithm>
using namespace std;
int main () {
    int N, max=0, sum=0, check=-1001;
    cin >> N;
    for (int i=0;i<N;i++)
        {
        int x;
        cin >> x;
        sum+=x;
        if (x>check)
        check=x;
        if (sum>max)
        max=sum;
        if (sum<0)
        sum=0;
        }
    check>0 ? cout << max : cout << check;
    return 0;
    }