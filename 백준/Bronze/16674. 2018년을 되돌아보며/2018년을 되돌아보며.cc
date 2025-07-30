#include <iostream>
#include <string>
using namespace std;
int main () {
    string N;
    cin >> N;
    int arr[10]={0}, chk=0;
    for (int i=0;i<N.size();i++)
        arr[N[i]-'0']++;
    for (int i=0;i<10;i++){
        if (i==0 || i==1 || i==2 || i==8)
            continue;
        if (arr[i]>0)
            chk=1;
    }
    if (chk)
        cout << "0";
    else if (arr[0]==arr[1] && arr[1]==arr[2] && arr[2]==arr[8])
        cout << "8";
    else if (arr[0]>0 && arr[1]>0 && arr[2]>0 && arr[8]>0)
        cout << "2";
    else
        cout << "1";
    return 0;
}