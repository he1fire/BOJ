#include <iostream>
char arr[55][55];
int need[5];
using namespace std;
int main() {
    int N, M;
    cin >> N >> M;
    for (int i=0;i<N;i++)
        cin >> arr[i];
    for (int i=0;i<N-1;i++){
        for (int j=0;j<M-1;j++){
            int cnt=0, ans=1;
            for (int k=0;k<2;k++){
                for (int l=0;l<2;l++){
                    if (arr[i+k][j+l]=='#')
                        ans=0;
                    if (arr[i+k][j+l]=='X')
                        cnt++;
                }
            }
            if (ans)
                need[cnt]++;
        }
    }
    for (int i=0;i<5;i++)
        cout << need[i] << "\n";
    return 0;
}