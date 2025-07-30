#include <iostream>
#include <queue>
#include <vector>
using namespace std;
int main () {
    int N, M;
    queue<int> q;
    vector<int> x(100001,-1);
    cin >> N >> M;
    q.push(N);
    x[N]=0;
    while (!q.empty())
        {
        int A=q.front();
        q.pop();
        if (A+1<=100000 && x[A+1]==-1)
            {
            q.push(A+1);
            x[A+1]=x[A]+1;
            }
        if (A-1>=0 && x[A-1]==-1)
            {
            q.push(A-1);
            x[A-1]=x[A]+1;
            }
        if ( A*2<=100000 && x[A*2]==-1)
            {
            q.push(A*2);
            x[A*2]=x[A]+1;
            }
        if (x[M]!=-1)
        break;
        }
    cout << x[M];
    return 0;
    }