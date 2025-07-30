#include <iostream>
using namespace std;
int main () {
    int N, M, arr[1005]={0}, ans=0;
    cin >> N >> M;
    for (int i=0;i<N;i++){
        int a;
        cin >> a;
        arr[a]=1;
    }
    for (int i=0;i<=1000;i++){
        if (arr[i]==1){
            ans++;
            for (int j=0;j<M;j++){
                if (i+j>1000)
                    break;
                arr[i+j]=0;
            }
        }
    }
    cout << ans;
    return 0;
}