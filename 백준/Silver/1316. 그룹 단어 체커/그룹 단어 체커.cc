#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <queue>
using namespace std;
int main () {
    int N, ans=0;
    cin >> N;
    for (int i=0;i<N;i++)
        {
        string A;
        int cnt=0, x[27]={0, };
        cin >> A;
        x[A[0]-97]++;
        for (int j=1;j<A.size();j++)
            {
            if (A[j-1]!=A[j] && x[A[j]-97]!=0)
                {
                cnt=1;
                break;
                }
            else
            x[A[j]-97]++;
            }
        if (cnt==0)
        ans++;
        }
    cout << ans;
    return 0;
    }