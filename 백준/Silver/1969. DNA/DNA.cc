#include <iostream>
#include <string>
using namespace std;
int main () {
    char DNA[4]={'A','C','G','T'};
    int N, M, cnt=0;
    string arr[1005], ans;
    cin >> N >> M;
    for (int i=0;i<N;i++)
        cin >> arr[i];
    for (int i=0;i<M;i++){
        int chk[4]={0}, x=0, y=0;
        for (int j=0;j<N;j++){
            if (arr[j][i]=='A')
                chk[0]++;
            if (arr[j][i]=='C')
                chk[1]++;
            if (arr[j][i]=='G')
                chk[2]++;
            if (arr[j][i]=='T')
                chk[3]++;
        }
        for (int j=0;j<4;j++){
            if (chk[j]>y){
                y=chk[j];
                x=j;
            }
        }
        for (int j=0;j<4;j++){
            if (j!=x)
                cnt+=chk[j];
        }
        ans.push_back(DNA[x]);
    }
    cout << ans << "\n" << cnt;
    return 0;
}