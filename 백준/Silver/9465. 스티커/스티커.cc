#include <iostream>
#include <vector>
using namespace std;
int main () {
    int N;
    cin >> N;
    for (int i=1;i<=N;i++)
        {
        int M;
        cin >> M;
        vector<int> A, B, s1(M+1,0), s2(M+1,0), s3(M+1,0);
        for (int j=1;j<=M;j++)
            {
            int x;
            cin >> x;
            A.push_back(x);
            }
        for (int j=1;j<=M;j++)
            {
            int x;
            cin >> x;
            B.push_back(x);
            }
        for (int j=1;j<=M;j++)
            {
            s1[j]=max(s2[j-1]+A[j-1],s3[j-1]+A[j-1]);
            s2[j]=max(s1[j-1]+B[j-1],s3[j-1]+B[j-1]);
            s3[j]=max(s1[j-1],s2[j-1]);
            }
        cout << max(s1[M],max(s2[M],s3[M])) << "\n";
        }
    return 0;
    }