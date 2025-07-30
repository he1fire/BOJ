#include <iostream>
#include <string>
using namespace std;
int main() {
    int N, M, cnt[10]={0, };
    cin >> N >> M;
    string x[510], base[5]={"....", "*...", "**..", "***.", "****"};
    for (int i=0;i<5*N+1;i++)
    cin >> x[i];
    for (int i=1;i<5*M+1;i+=5){
        for (int j=1;j<5*N+1;j+=5){
            string nw;
            for (int k=0;k<4;k++)
                nw.push_back(x[j+k][i]);
            for (int k=0;k<5;k++){
                if (nw==base[k])
                    cnt[k]++;
                }
            }
        }
    for (int i=0;i<5;i++)
    cout << cnt[i] << " ";
    return 0;
    }