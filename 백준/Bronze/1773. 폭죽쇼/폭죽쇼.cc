#include <iostream>
#include <vector>
using namespace std;
int main () {
    int N, M, y=0;
    cin >> N >> M;
    vector<int> x(M+1,0);
    for (int i=1;i<=N;i++)
        {
        int a;
        cin >> a;
        for (int j=1;j<x.size();j++)
            {
            if (j%a==0)
            x[j]=1;
            }
        }
    for (int i=1;i<x.size();i++)
        {
        if (x[i])
        y++;
        }
    cout << y;
    return 0;
    }