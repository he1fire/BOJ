#include <iostream>
#include <string>
using namespace std;
int main() {
    string N;
    int arr[27]={0}, cnt=0;
    cin >> N;
    for (int i=0;i<N.size();i++){
        if (arr[N[i]-65]==0){
            int M[27]={0};
            for (int j=i+1;N[i]!=N[j];j++){
                M[N[j]-65]++;
            }
            for (int j=0;j<27;j++){
                if (M[j]==1)
                    cnt++;
            }
            arr[N[i]-65]=1;
        }
    }
    cout << cnt/2;
    return 0;
}