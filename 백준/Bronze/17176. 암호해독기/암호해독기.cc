#include <iostream>
#include <string>
using namespace std;
int main () {
    int N, arr[53]={0}, cnt=1;
    string M;
    cin >> N;
    for (int i=0;i<N;i++){
        int a;
        cin >> a;
        arr[a]++;
    }
    getchar();
    getline(cin,M);
    for (int i=0;i<M.size();i++){
        if (M[i]>='A' && M[i]<='Z')
            arr[M[i]-64]--;
        else if (M[i]>='a' && M[i]<='z')
            arr[M[i]-70]--;
        else
            arr[0]--;
    }
    for (int i=0;i<53;i++){
        if (arr[i]!=0)
            cnt=0;
    }
    cnt ? cout << "y" : cout << "n";
    return 0;
}