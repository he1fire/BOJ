#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;
int main () {
    int N, M;
    queue<int> q;
    vector<int> x(100001,-1), y(100001,0), z;
    cin >> N >> M;
    q.push(N);
    x[N]=0;
    while (!q.empty()){
        int A=q.front();
        q.pop();
        if (A+1<=100000 && x[A+1]==-1){
            q.push(A+1);
            x[A+1]=x[A]+1;
            y[A+1]=A;
        }
        if (A-1>=0 && x[A-1]==-1){
            q.push(A-1);
            x[A-1]=x[A]+1;
            y[A-1]=A;
        }
        if ( A*2<=100000 && x[A*2]==-1){
            q.push(A*2);
            x[A*2]=x[A]+1;
            y[A*2]=A;
        }
        if (x[M]!=-1)
        break;
    }
    cout << x[M] << "\n";
    int cnt=M;
    while(1){
        if (cnt==N)
            break;
        z.push_back(cnt);
        cnt=y[cnt];
    }
    z.push_back(N);
    reverse(z.begin(),z.end());
    for (int i=0;i<z.size();i++)
        cout << z[i] << " ";
    return 0;
}