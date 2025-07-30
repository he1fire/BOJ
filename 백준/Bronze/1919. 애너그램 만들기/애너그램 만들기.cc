#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main () {
    int cnt=0, x[26]={0, }, y[26]={0, };
    string N, M;
    cin >> N >> M;
    for (int i=0;i<N.size();i++)
        x[N[i]-97]++;
    for (int i=0;i<M.size();i++)
        y[M[i]-97]++;
    for (int i=0;i<26;i++){
        if (x[i]!=y[i])
            cnt+=max(x[i]-y[i],y[i]-x[i]);
    }
    cout << cnt;
    return 0;
}