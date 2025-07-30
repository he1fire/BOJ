#include <iostream>
#include <string>
using namespace std;
int main () {
    int arr[2][2]={{1,2},{3,4}};
    string S;
    cin >> S;
    for (int i=0;i<S.size();i++){
        if (S[i]=='H'){
            int a=arr[0][0], b=arr[0][1];
            arr[0][0]=arr[1][0];
            arr[0][1]=arr[1][1];
            arr[1][0]=a;
            arr[1][1]=b;
        }
        else {
            int a=arr[0][0], b=arr[1][0];
            arr[0][0]=arr[0][1];
            arr[1][0]=arr[1][1];
            arr[0][1]=a;
            arr[1][1]=b;
        }
    }
    for (int i=0;i<2;i++){
        for (int j=0;j<2;j++)
            cout << arr[i][j] << " ";
        cout << "\n";
    }
    return 0;
}