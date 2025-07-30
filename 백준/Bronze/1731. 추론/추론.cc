#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, arr[55];
int main(){
    cin >> N;
    for (int i=0;i<N;i++)
        cin >> arr[i];
    if (arr[0]+arr[2]==arr[1]*2)
        cout << arr[0]+(arr[1]-arr[0])*N;
    else{
        ll chk=1;
        while (N--)
            chk*=arr[1]/arr[0];
        cout << arr[0]*chk;
    }
    return 0;
}