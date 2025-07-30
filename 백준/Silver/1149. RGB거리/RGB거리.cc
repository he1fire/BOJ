#include <iostream>
#include <vector>
using namespace std;
int main () {
    int N;
    cin >> N;
    vector<int> R, G, B, s1(N+1,0), s2(N+1,0), s3(N+1,0);
    for (int i=1;i<=N;i++)
        {
        int a, b, c;
        cin >> a >> b >> c;
        R.push_back(a);
        G.push_back(b);
        B.push_back(c);
        }
    for (int i=1;i<=N;i++)
        {
        s1[i]=min(s2[i-1],s3[i-1])+R[i-1];
        s2[i]=min(s1[i-1],s3[i-1])+G[i-1];
        s3[i]=min(s2[i-1],s1[i-1])+B[i-1];
        }
    cout << min(s1[N],min(s2[N],s3[N]));
    return 0;
    }