#include <iostream>
#include <map>
#include <algorithm>
#include <string>
using namespace std;
map<string,int> m;
int main () {
    int N;
    cin >> N;
    int arr[205][3]={0}, chk[205][3]={0};
    for (int i=0;i<N;i++){
        for (int j=0;j<3;j++){
            cin >> arr[i][j];
            chk[i][j]=arr[i][j];
        }
    }
    for (int i=0;i<3;i++){
        for (int j=0;j<N;j++){
            for (int k=j+1;k<N;k++){
                if (arr[j][i]==arr[k][i]){
                    chk[j][i]=0;
                    chk[k][i]=0;
                }
            }
        }
    }
    for (int i=0;i<N;i++){
        int cnt=0;
        for (int j=0;j<3;j++)
            cnt+=chk[i][j];
        cout << cnt << "\n";
    }
    return 0;
}