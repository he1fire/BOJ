#include <iostream>
using namespace std;
int main(){
    int N, M, ans=0;
    cin >> N >> M;
    for (int i=2;1;i*=2){
        N*=M;
        N/=100;
        if (N<=5)
            break;
        ans+=N*i;
    }
    cout << ans;
    return 0;
}