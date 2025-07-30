#include <iostream>
using namespace std;
int main () {
    int N, cnt[100001][3]={0, }, ans=0;
    cnt[0][0]=1;
    cnt[0][1]=1;
    cnt[0][2]=1;
    cin >> N;
    for (int i=1;i<N;i++)
        {
        cnt[i][0]=(cnt[i-1][1]+cnt[i-1][2])%9901;
        cnt[i][1]=(cnt[i-1][0]+cnt[i-1][2])%9901;
        cnt[i][2]=(cnt[i-1][0]+cnt[i-1][1]+cnt[i-1][2])%9901;
        }
    cout << (cnt[N-1][0]+cnt[N-1][1]+cnt[N-1][2])%9901;
    return 0;
    }