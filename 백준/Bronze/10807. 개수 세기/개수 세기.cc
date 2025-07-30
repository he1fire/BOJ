#include <iostream>
using namespace std;
int main () {
    int N, M, x[101]={0, }, cnt=0;
    cin >> N;
    for (int i=0;i<N;i++)
        cin >> x[i];
    cin >> M;
    for (int i=0;i<N;i++){
        if (x[i]==M)
            cnt++;
        } 
    cout << cnt;
    return 0;
    }